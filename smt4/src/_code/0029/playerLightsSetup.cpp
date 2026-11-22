/* NON_MATCHING: 476 lines. The arms, calls and constants are retail's, but the VFP allocation differs throughout:
 * retail spills light 1's six colours plus the sine and cosine and keeps light 2's colours and five constants in
 * registers; this build does the opposite. The earlier draft scored 407 but built 149 rows (this one 297, retail 289) (it
 * left code out), so this complete rewrite replaced it (wave 76 review: correctness before score). */
#include "gfx/FragmentLightColors.h"
#include "AsdSDK/Source/Gfx/Effect/effParts.h"
#include "util/TrigF32.h"
#include <math.h>

extern "C" {

s32 FUN_0025bb34(s32 category, const char *name, s32 bank);
void FUN_001a9604(u32 mode, f32 red, f32 green, f32 blue, f32 near, f32 far, f32 density);


/* Sets up the three player lights: with a black first colour the caller's colours, direction and positions,
 * otherwise the fixed preset. */
void playerLightsSetup(s32 diffuse1R, s32 diffuse1G, s32 diffuse1B, s32 specular1R, s32 specular1G, s32 specular1B,
                  s32 diffuse2R, s32 diffuse2G, s32 diffuse2B, s32 specular2R, s32 specular2G, s32 specular2B,
                  f32 angle, f32 directionY, f32 x, f32 y, f32 z, f32 targetX, f32 targetY, f32 targetZ, f32 height)
{
    FragmentLightRef light1 = { NULL };
    FragmentLightRef light2 = { NULL };
    FragmentLightRef light3 = { NULL };
    ModelColor diffuse1((f32)diffuse1R * (1.0f / 255.0f), (f32)diffuse1G * (1.0f / 255.0f), (f32)diffuse1B * (1.0f / 255.0f), 1.0f);
    ModelColor specular1((f32)specular1R * (1.0f / 255.0f), (f32)specular1G * (1.0f / 255.0f), (f32)specular1B * (1.0f / 255.0f), 1.0f);
    ModelColor highlight1(1.0f, 1.0f, 1.0f, 1.0f);
    f32 radians = angle * (3.14159265f / 180.0f);
    f32 directionX = libm_sinf(radians);
    f32 directionZ = libm_cosf(radians);
    ModelColor diffuse2((f32)diffuse2R * (1.0f / 255.0f), (f32)diffuse2G * (1.0f / 255.0f), (f32)diffuse2B * (1.0f / 255.0f), 1.0f);
    ModelColor specular2((f32)specular2R * (1.0f / 255.0f), (f32)specular2G * (1.0f / 255.0f), (f32)specular2B * (1.0f / 255.0f), 1.0f);
    ModelColor highlight2(0.8f, 0.8f, 0.8f, 1.0f);
    ModelColor diffuse3(0.8f, 0.6f, 0.6f, 1.0f);
    ModelColor specular3(0.4f, 0.3f, 0.3f, 1.0f);
    ModelColor highlight3(0.5f, 0.5f, 0.5f, 1.0f);

    light1.data = (FragmentLightData *)asdModelSlotGetResource(FUN_0025bb34(1, "Light_Player1", 0), 0);
    if (diffuse1R == 0 && diffuse1G == 0 && diffuse1B == 0) {
        fragmentLightSetDiffuse(&light1, diffuse1);
        fragmentLightSetSpecular0(&light1, specular1);
        fragmentLightSetSpecular1(&light1, highlight1);
        light1.data->direction[0] = directionX;
        light1.data->direction[1] = directionY;
        light1.data->direction[2] = directionZ;
    } else {
        fragmentLightSetDiffuse(&light1, ModelColor(1.0f, 0.93f, 0.88f, 1.0f));
        fragmentLightSetSpecular0(&light1, ModelColor(1.0f, 0.93f, 0.89f, 1.0f));
        fragmentLightSetSpecular1(&light1, ModelColor(1.0f, 0.87f, 0.73f, 1.0f));
        light1.data->direction[0] = 0.08f;
        light1.data->direction[1] = -0.03f;
        light1.data->direction[2] = -0.04f;
    }

    light2.data = (FragmentLightData *)asdModelSlotGetResource(FUN_0025bb34(1, "Light_Player2", 0), 0);
    if (diffuse1R == 0 && diffuse1G == 0 && diffuse1B == 0) {
        fragmentLightSetDiffuse(&light2, diffuse2);
        fragmentLightSetSpecular0(&light2, specular2);
        fragmentLightSetSpecular1(&light2, highlight2);
    } else {
        fragmentLightSetDiffuse(&light2, ModelColor(0.18f, 0.14f, 0.14f, 1.0f));
        fragmentLightSetSpecular0(&light2, ModelColor(1.0f, 0.81f, 0.67f, 1.0f));
        fragmentLightSetSpecular1(&light2, ModelColor(1.0f, 0.81f, 0.62f, 1.0f));
    }

    light3.data = (FragmentLightData *)asdModelSlotGetResource(FUN_0025bb34(1, "Light_Player3", 0), 0);
    if (diffuse1R == 0 && diffuse1G == 0 && diffuse1B == 0) {
        fragmentLightSetDiffuse(&light3, diffuse3);
        fragmentLightSetSpecular0(&light3, specular3);
        fragmentLightSetSpecular1(&light3, highlight3);
    } else {
        fragmentLightSetDiffuse(&light3, ModelColor(0.38f, 0.26f, 0.28f, 1.0f));
        fragmentLightSetSpecular0(&light3, ModelColor(0.51f, 0.41f, 0.48f, 1.0f));
        fragmentLightSetSpecular1(&light3, ModelColor(1.0f, 1.0f, 1.0f, 1.0f));
    }

    /* The second light sits at the target, the third above the first light's position. */
    f32 dx = targetX - x;
    f32 dy = targetY - y;
    f32 dz = targetZ - z;
    f32 length = sqrtf(dx * dx + dy * dy + dz * dz);
    length = length < 0.01f ? 0.01f : length;
    f32 lightX = x + dx / length * length;
    f32 lightY = y + dy / length * length;
    f32 lightZ = z + dz / length * length;
    asdModelSlotSetTranslation(FUN_0025bb34(1, "Light_Player2", 0), 0, lightX, lightY, lightZ);
    f32 raisedY = y + height;
    s32 slot = FUN_0025bb34(1, "Light_Player3", 0);
    if (diffuse1R == 0 && diffuse1G == 0 && diffuse1B == 0) {
        asdModelSlotSetTranslation(slot, 0, lightX, raisedY, lightZ);
    } else {
        asdModelSlotSetTranslation(slot, 0, 0.0f, 1500.0f, -1500.0f);
    }
    FUN_001a9604(0, 1.0f, 1.0f, 1.0f, -100000.0f, 1000000.0f, 0.5f);
}

} /* extern "C" */
