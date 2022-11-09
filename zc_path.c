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

ZC_API char *zc_dirname(char *path)
{
    size_t i;
    if (!path || !*path) return ".";
    i = strlen(path) - 1;
    for (; path[i] == '/'; i--)
        if (!i) return "/";
    for (; path[i] != '/'; i--)
        if (!i) return ".";
    for (; path[i] == '/'; i--)
        if (!i) return "/";
    path[i + 1] = 0;
    return path;
}
