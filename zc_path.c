#include "zc_path.h"
#include "zc_os.h"
#include <stddef.h>
#include <string.h>

// Acknowledgment: gblic
char *zc_basename(char *path)
{
    char *p = strrchr(path, ZC_PATH_SEP);
    return p ? p + 1 : path;
}

char *zc_dirname(char *path)
{
    char *p = strrchr(path, ZC_PATH_SEP);
    while (p > path)
    {
        *p-- = 0;
    }
    return path;
}
