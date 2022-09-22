#include "zc_path.h"
#include "zc_os.h"
#include <stddef.h>
#include <string.h>

#define ZC_API

// Acknowledgment: gblic
ZC_API char *zc_basename(char const *path)
{
    char *p = strrchr(path, ZC_PATH_SEP);
    return p ? p + 1 : (char *)path;
}

ZC_API char *zc_dirname(char const *path)
{
    char *p = strrchr(path, ZC_PATH_SEP);
    while (p > path)
    {
        *p-- = 0;
    }
    return (char *)path;
}
