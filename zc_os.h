#ifndef ZC_OS_H
#define ZC_OS_H

enum
{
    ZC_WINDOWS,
    ZC_UNIX,
    ZC_MACOS,
};

#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || defined(__WIN32__)
#define ZC_OS ZS_WINDOWS
#elif defined(__unix__) || defined(__unix)
#define ZC_OS ZS_UNIX
#elif defined(__APPLE__)
#define ZC_OS ZC_MACOS
#endif

#ifdef MS_WINDOWS
#define ZC_PATH_SEP '\\'
#endif

#ifndef ZC_PATH_SEP
#define ZC_PATH_SEP '/'
#endif

#endif
