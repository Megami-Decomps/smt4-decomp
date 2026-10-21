#ifndef SHARD_W6_W6MATCH2_ONLINE_STRING_H
#define SHARD_W6_W6MATCH2_ONLINE_STRING_H

#include "common.h"

struct OnlineStringValue;
extern "C" {
OnlineStringValue* onlineStringConstruct(OnlineStringValue* string, const char* text);
OnlineStringValue* onlineStringCopyConstruct(OnlineStringValue* string, const OnlineStringValue* other);
void onlineStringDestroy(OnlineStringValue* string);
}

struct OnlineStringValue {
    const void* vtable; // 0x00
    char* data;         // 0x04
    OnlineStringValue(const char* text) { onlineStringConstruct(this, text); }
    OnlineStringValue(const OnlineStringValue& other) { onlineStringCopyConstruct(this, &other); }
    ~OnlineStringValue() { onlineStringDestroy(this); }
};

#endif
