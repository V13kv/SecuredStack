#include <stdio.h>
#include <stdlib.h>

#include "include/stack.h"
#include "libs/debug/debug.h"

int main(void)
{
    stack_t stack = {};
    stackCtor(&stack, 8);

    // --------------------------------------Normal test--------------------------------------------
    for (int i = 0; i < 100; ++i)
    {
        IS_OK_W_EXIT(stackPush(&stack, 100-i));
    }
    stackDump(&stack);
    for (int i = 0; i < 95; ++i)
    {
        IS_OK_W_EXIT(stackPop(&stack));
    }
    stackDump(&stack);

    // -----------------------------------Hash sum and canary test-----------------------------------
    // stack.data = (stackElem_t *) calloc(1, sizeof(stackElem_t));
    // IS_OK_W_EXIT(stackPop(&stack));

    // // -----------------------------------Standard debug macroses test-----------------------------------
    // for (int i = 0; i < 2; ++i)
    // {
    //     IS_OK_W_EXIT(stackPush(&stack, 123));
    // }
    // for (int i = 0; i < 3; ++i)
    // {
    //     IS_OK_W_EXIT(stackPop(&stack));
    // }

    // // -----------------------------------Canary test-----------------------------------
    // *( (int *)(&stack) ) = -1;
    // IS_OK_W_EXIT(stackReallocation(&stack, REALLOC_MODES::INCREASE));

    // // -----------------------------------Hash Sum test----------------------------------
    // stack.hashSum = 1234;

    stackDtor(&stack);

    return 0;
}
