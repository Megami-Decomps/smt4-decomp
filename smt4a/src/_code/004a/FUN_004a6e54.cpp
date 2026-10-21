#include "common.h"
class OperationObject {
public:
    virtual void operation0();
    virtual void operation1();
    virtual void operation2();
    virtual void operation3();
};
extern "C" {
extern OperationObject **g_animatedPageSelection;
/* Invokes operation 3 and reports success. */
int FUN_004a6e54() {
    (*g_animatedPageSelection)->operation3();
    return 0;
}
}
