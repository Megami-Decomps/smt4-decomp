#include "romwright_types.h"

struct Vec3 {
    float x, y, z;
    Vec3(const float &ax, const float &ay, const float &az) : x(ax), y(ay), z(az) {}
};

extern "C" {

float scriptReadStackValueAsFloat(int);
int FUN_00377f54(unsigned int, Vec3, float);

extern unsigned int scrGetArg(unsigned int);

unsigned int FUN_0039bbec(void)
{
    unsigned int id = scrGetArg(0);
    float a = scriptReadStackValueAsFloat(1);
    float b = scriptReadStackValueAsFloat(2);
    float c = scriptReadStackValueAsFloat(3);
    float d = scriptReadStackValueAsFloat(4);
    FUN_00377f54(id, Vec3(a, b, c), d);
    return 1;
}

} /* extern "C" */
