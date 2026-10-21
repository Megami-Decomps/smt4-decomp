#include "common.h"

struct FloatPair { f32 x, y; };
struct DrawableRectangle {
    u32 flags; // 0x00
    FloatPair position; // 0x04
    f32 width; // 0x0c
    f32 height; // 0x10
};
struct RectangleProvider;
struct RectangleProviderTable {
    u8 unk00[0x10];
    DrawableRectangle *(*getRectangle)(RectangleProvider *provider); // 0x10
};
struct RectangleProvider {
    RectangleProviderTable *table; // 0x00
};
struct RectangleOwner {
    u8 unk000[0x260];
    RectangleProvider *provider; // 0x260
};

extern "C" {
// Update the position and dimensions of the provider's rectangle drawable.
void drawableSetRectangle(RectangleOwner *owner, f32 height, f32 width, f32 x, f32 y)
{
    RectangleProvider *provider = owner->provider;
    DrawableRectangle *rectangle = provider->table->getRectangle(provider);
    if (rectangle != NULL && (rectangle->flags & 0x20000000) == 0) {
        rectangle = NULL;
    }
    rectangle->height = height;
    rectangle->width = width;
    rectangle->position.x = x;
    rectangle->position.y = y;
}
}
