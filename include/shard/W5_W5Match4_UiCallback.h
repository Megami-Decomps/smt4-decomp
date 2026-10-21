#ifndef SHARD_W5_W5MATCH4_UICALLBACK_H
#define SHARD_W5_W5MATCH4_UICALLBACK_H

#include "common.h"

/* Interface shared by the UI objects driven through job callbacks. */
class UiCallbackObject {
public:
    virtual ~UiCallbackObject();
    virtual void initialize();
    virtual void update();
    virtual void prepareDraw();
    virtual void draw();
    virtual void finishDraw();
};

struct UiCallbackContext {
    /* 0x00 */ UiCallbackObject *object;
};

#endif
