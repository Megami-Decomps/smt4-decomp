#include "common.h"
class OperationObject {
public:
    virtual void operation0();
    virtual void operation1();
    virtual void operation2();
    virtual void operation3();
    virtual void operation4();
    virtual void operation5();
};
extern "C" {
extern OperationObject **g_animatedPageSelection;
/* Invokes operation 5 and reports success. */
int FUN_004a6f64() {
    (*g_animatedPageSelection)->operation5();
    return 0;
}
}
