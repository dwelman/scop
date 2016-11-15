#include <scop.h>

char	*read_shader(char *filename)
{
	FILE	*fp;
	long	size;
	char	*ret;

	fp = fopen(filename, "rb");
	if (!fp)
		exit(-1);
	fseek(fp, 0L, SEEK_END);
	size = ftell(fp);
	rewind(fp);
	if ((ret = (char *)malloc(sizeof(char) * size + 1)) == NULL)
		exit(-1);
	fread(ret, size, 1, fp);
	fclose(fp);
	ret[size] = '\0';
	return (ret);
}