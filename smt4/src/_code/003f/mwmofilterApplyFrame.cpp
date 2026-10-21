/* NON_MATCHING: context-save hoisting changes R0/R1 allocation through parameter setup; all later code matches, and alternate optimization remains untested. */
#include "shard/W6_W6Match6_MovieFilter.h"


extern "C" {
extern MovieFilterAllocators g_mwmofilterDeblocker;
s32 FUN_0032fa20(MovieDeblockParameters *);

u32 mwmofilterApplyFrame(MovieFilterContext *context, const MovieFilterFrame *source,
                  MovieFilterFrame *destination, u32 mode)
{
    if (source == NULL || destination == NULL || context == NULL) {
        return 1;
    }
    if (source == destination) {
        if (destination->format == 1) {
            return 3;
        }
    }
    MovieDeblockParameters parameters;
    parameters.enabled = 1;
    parameters.inputY = source->y;
    parameters.inputU = source->u;
    parameters.inputV = source->v;
    parameters.width = source->width;
    parameters.height = source->height;
    parameters.yPitch = source->yPitch;
    parameters.uvPitch = source->uPitch;
    parameters.yQuantizer = source->yQuantizer;
    parameters.uvQuantizer = source->uvQuantizer;
    if (source != destination) {
        s32 required;
        if (mode == 0) {
            parameters.planeMask = 3;
            required = source->yPitch * (source->height + (source->height >> 1) + 1);
        } else if (mode == 1) {
            parameters.planeMask = 1;
            required = source->yPitch * (source->height + 1);
        } else {
            return 4;
        }
        if (context->capacity < required) {
            if (context->buffer != NULL) {
                g_mwmofilterDeblocker.release(context->buffer);
            }
            context->capacity = required;
            context->buffer = g_mwmofilterDeblocker.allocate(required);
            if (context->buffer == NULL) {
                return 5;
            }
        }
        parameters.outputY = context->buffer;
        parameters.outputU = parameters.outputY + source->yPitch * source->height;
        parameters.outputV = parameters.outputU + (source->yPitch >> 1);
    } else {
        // The retail in-place path does not initialize planeMask.
        parameters.outputY = source->y;
        parameters.outputU = source->u;
        parameters.outputV = source->v;
    }
    s32 status = FUN_0032fa20(&parameters);
    switch (status) {
    case -5:
    case -4:
    case -3:
        return 2;
    case -2:
    case -1:
        return 6;
    default:
        *destination = *source;
        if (status & 1) {
            destination->y = parameters.outputY;
        }
        if (status & 2) {
            destination->u = parameters.outputU;
            destination->v = parameters.outputV;
        }
        destination->yQuantizer = 0;
        destination->uvQuantizer = 0;
        return 0;
    }
}
}
