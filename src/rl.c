#include <raylib.h>

void TraceLog_(int logLevel, const char * text)
{
    TraceLog(logLevel, "%s", text);
}

const char * TextFormat_(const char * text)
{
    return TextFormat("%s", text);
}
