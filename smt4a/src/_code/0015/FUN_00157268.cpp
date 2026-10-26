/* NON_MATCHING: stack block now matches; armcc hoists the blend constants 6/7 into sl/fp where retail re-materialises them per case. */
#include "gfx/RenderPassQueue.h"
extern "C" {
void _ZN9SlotStateC1Ev(RenderPassViewportState *state);
u32 *gpuEmitDepthBufferCommands(RenderPassDepthState *state, u32 *commands, s32 first, s32 second);
u32 *FUN_00177abc(RenderPassColorState *state, u32 *commands);
void FUN_0016bb74(RenderPassQueue *queue, s32 pass);
void FUN_0016b8a8(RenderPassQueue *queue, s32 pass);
void FUN_0016b078(RenderPassQueue *queue, RenderPassItem *item);
void vectorClear(RenderPassQueue *queue);


/* The graphics states set up before the passes, laid out as one block. */
struct RenderPassStates {
    RenderPassViewportState viewport;
    RenderPassDepthState depth;
    RenderPassColorState color;
};

// Draw the queued items in four passes with the corresponding blend factors.
void FUN_00157268(RenderPassQueue *queue)
{
    queue->active = 0;
    u32 **commands = queue->commands;
    RenderPassStates states;
    _ZN9SlotStateC1Ev(&states.viewport);
    states.depth.enabled = 0;
    states.color.value = 0.0f;
    *commands = gpuEmitDepthBufferCommands(&states.depth, *commands, 1, 1);
    *commands = FUN_00177abc(&states.color, *commands);
    for (s32 pass = 0; pass < 4; ++pass) {
        FUN_0016bb74(queue, pass);
        RenderPassBlend *blend = &queue->blend;
        switch (pass) {
        case 0:
            blend->enabled = 0;
            break;
        case 1:
            blend->enabled = 1;
            blend->operation = 0;
            blend->source = 6;
            blend->destination = 7;
            break;
        case 2:
            blend->enabled = 1;
            blend->operation = 2;
            blend->source = 6;
            blend->destination = 1;
            break;
        case 3:
            blend->enabled = 1;
            blend->operation = 0;
            blend->source = 6;
            blend->destination = 1;
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
