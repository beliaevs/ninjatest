#include "f.h"

std::string f()
{
    return "hello!";
}

#define QUOTE(str) #str
#define EXPAND_AND_QUOTE(str) QUOTE(str)
#define CPPVERSION EXPAND_AND_QUOTE(__cplusplus)

std::string getConfiguration()
{
    std::string res = CPPVERSION;

#ifdef NDEBUG
    res += " Release";
#else
    res += " Debug";
#endif

    return res;
}

std::string getCompiler()
{
    std::string res;
#ifdef __clang__
    res = res + "clang " + __clang_version__;
#elif defined(__GNUC__)
    res = res + "gcc " + EXPAND_AND_QUOTE(__GNUC__) + "." + EXPAND_AND_QUOTE(__GNUC_MINOR__) + "." + EXPAND_AND_QUOTE(__GNUC_PATCHLEVEL__);
#elif defined(__MSVCVER)
    res = res + "msvc " + EXPAND_AND_QUOTE(__MSVCVER);
#endif
    return res;

}