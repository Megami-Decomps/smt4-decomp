/* NON_MATCHING: native graphics-state stack layout and hoisted blend constants differ. */
#include "gfx/RenderPassQueue.h"
extern "C" {
void _ZN9SlotStateC1Ev(RenderPassViewportState *state);
u32 *gpuEmitDepthBufferCommands(RenderPassDepthState *state, u32 *commands, s32 first, s32 second);
u32 *FUN_00177abc(RenderPassColorState *state, u32 *commands);
void FUN_0016bb74(RenderPassQueue *queue, s32 pass);
void FUN_0016b8a8(RenderPassQueue *queue, s32 pass);
void FUN_0016b078(RenderPassQueue *queue, RenderPassItem *item);
void vectorClear(RenderPassQueue *queue);

// Draw the queued items in four passes with the corresponding blend factors.
void FUN_00157268(RenderPassQueue *queue)
{
    queue->active = 0;
    u32 **commands = queue->commands;
    RenderPassViewportState viewport;
    _ZN9SlotStateC1Ev(&viewport);
    RenderPassDepthState depth;
    depth.enabled = 0;
    RenderPassColorState color;
    color.value = 0.0f;
    *commands = gpuEmitDepthBufferCommands(&depth, *commands, 1, 1);
    *commands = FUN_00177abc(&color, *commands);
    for (s32 pass = 0; pass < 4; ++pass) {
        FUN_0016bb74(queue, pass);
        switch (pass) {
        case 0:
            queue->blend.enabled = 0;
            break;
        case 1:
            queue->blend.enabled = 1;
            queue->blend.operation = 0;
            queue->blend.source = 6;
            queue->blend.destination = 7;
            break;
        case 2:
            queue->blend.enabled = 1;
            queue->blend.operation = 2;
            queue->blend.source = 6;
            queue->blend.destination = 1;
            break;
        case 3:
            queue->blend.enabled = 1;
            queue->blend.operation = 0;
            queue->blend.source = 6;
            queue->blend.destination = 1;
            break;
        }
        FUN_0016b8a8(queue, pass);
        RenderPassItem *end = queue->end;
        for (RenderPassItem *item = queue->begin; item != end; ++item)
            FUN_0016b078(queue, item);
        vectorClear(queue);
    }
}
}
