#include "common.h"
class OperationObject {
public:
    virtual void operation0();
    virtual void operation1();
    virtual void operation2();
    virtual void operation3();
    virtual void operation4();
    virtual void operation5();
    virtual void operation6();
};
extern "C" {
extern OperationObject **DAT_0057f0a0;
/* Invokes operation 6 and reports success. */
int FUN_004a7588() {
    (*DAT_0057f0a0)->operation6();
    return 0;
}
}
