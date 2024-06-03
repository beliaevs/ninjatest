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