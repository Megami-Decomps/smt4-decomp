typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

#define BUTTON_STICK_DOWN  0x0C
#define BUTTON_STICK_RIGHT 0x0D
#define BUTTON_STICK_UP    0x0E
#define BUTTON_STICK_LEFT  0x0F

#define BUTTON_MODE_PRESSED 0
#define BUTTON_MODE_REPEAT  1
#define BUTTON_MODE_HELD    2

/* Angle sector (degrees) of one stick direction. */
struct StickSector {
    s16 center;
    s16 halfWidth;
};

/* Stick-as-d-pad configuration (observed fields only). */
struct StickDirectionTable {
    StickSector up;       /* 0x00 */
    StickSector left;     /* 0x04 */
    StickSector down;     /* 0x08 */
    StickSector right;    /* 0x0C */
    s8 enabled;           /* 0x10 */
};

extern StickDirectionTable DAT_00465278;   /* 0x465278 */

s32 padIsButtonPressed(s32 button);
s32 padIsButtonRepeat(s32 button);
s32 slotIsActive(s32 button);
s32 padGetNormalizedAnalogStick(f32 *x, f32 *y, s32 flag);
f32 __hardfp_atan2f(f32 x, f32 y);

static s32 isStickDirection(s32 button)
{
    return button == BUTTON_STICK_DOWN || button == BUTTON_STICK_RIGHT || button == BUTTON_STICK_UP ||
           button == BUTTON_STICK_LEFT;
}

/* The stick angle lies inside the sector [center - halfWidth, center + halfWidth). */
static s32 angleInSector(f32 angle, const StickSector *sector)
{
    return (f32)(sector->center - sector->halfWidth) <= angle && angle < (f32)(sector->center + sector->halfWidth);
}

/* Combined state of two buttons (pressed / repeating / held, depending on `mode`). When one of them is
 * a stick direction and the physical stick is not inside that direction's sector, that button's
 * contribution is dropped. */
u32 padGetCombinedButtonState(s32 buttonA, s32 buttonB, s32 mode)
{
    u32 result = 0;
    u32 stateA = 0;
    u32 stateB = 0;

    switch (mode) {
    case BUTTON_MODE_PRESSED:
        stateA = padIsButtonPressed(buttonA);
        stateB = padIsButtonPressed(buttonB);
        result = stateA | stateB;
        break;
    case BUTTON_MODE_REPEAT:
        stateA = padIsButtonRepeat(buttonA);
        stateB = padIsButtonRepeat(buttonB);
        if (slotIsActive(buttonA) != 0 && slotIsActive(buttonB) != 0) {
            stateB = 0;
        }
        result = stateA | stateB;
        break;
    case BUTTON_MODE_HELD:
        stateA = slotIsActive(buttonA);
        stateB = slotIsActive(buttonB);
        result = stateA | stateB;
        break;
    }

    s32 stickSide;
    if (isStickDirection(buttonA)) {
        stickSide = 1;
    } else if (isStickDirection(buttonB)) {
        stickSide = 2;
    } else {
        return result;
    }

    if (DAT_00465278.enabled != 0 &&
        (slotIsActive(BUTTON_STICK_UP) != 0 || slotIsActive(BUTTON_STICK_LEFT) != 0 ||
         slotIsActive(BUTTON_STICK_DOWN) != 0 || slotIsActive(BUTTON_STICK_RIGHT) != 0)) {
        f32 x;
        f32 y;
        padGetNormalizedAnalogStick(&x, &y, 0);
        f32 angle = __hardfp_atan2f(x, y) * 57.295776f;
        if (angle < 0.0f) {
            angle += 360.0f;
        }
        if (x == 0.0f && y == 0.0f) {
            return result;
        }
        /* The up sector wraps through 0: [center - halfWidth + 360, 360) and [center, center + halfWidth). */
        if (slotIsActive(BUTTON_STICK_UP) != 0) {
            if ((f32)(DAT_00465278.up.center - DAT_00465278.up.halfWidth) + 360.0f <= angle && angle < 360.0f) {
                return result;
            }
            if ((f32)DAT_00465278.up.center <= angle && angle < (f32)(DAT_00465278.up.center + DAT_00465278.up.halfWidth)) {
                return result;
            }
        } else if (slotIsActive(BUTTON_STICK_LEFT) != 0) {
            if (angleInSector(angle, &DAT_00465278.left)) {
                return result;
            }
        } else if (slotIsActive(BUTTON_STICK_DOWN) != 0) {
            if (angleInSector(angle, &DAT_00465278.down)) {
                return result;
            }
        } else if (slotIsActive(BUTTON_STICK_RIGHT) != 0) {
            if (angleInSector(angle, &DAT_00465278.right)) {
                return result;
            }
        }
        if (stickSide == 1) {
            stateA = 0;
        } else {
            stateB = 0;
        }
        result = stateA | stateB;
    }
    return result;
}

} /* extern "C" */
