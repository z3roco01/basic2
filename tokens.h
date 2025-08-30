#ifndef TOKENS_H_
#define TOKENS_H_

#include<stdint.h>

typedef enum {
    /* control */
    RST_TOK, // soft reset the basic environment

    /* logical/bitwise */
    AND_TOK, // logical/bitwise and
    NOT_TOK, // logical/bitwise not
    OR_TOK,  // logical/bitwise or
    SHL_TOK, // shift left, wraps around
    SHR_TOK, // shift right

    /* math */
    ABS_TOK, // asbolute
    ADD_TOK, // add
    SUB_TOK, // subtract
    MUL_TOK, // multiply
    DIV_TOK, // divide

    /* internal */
    END_TOK, // marks the end of the program
} tokenType_t;

typedef struct {
    tokenType_t type;
    uint32_t dataLen;
    uint8_t data[];
} token_t;

typedef enum {
    EXEC_SUCCESS,
    EXEC_FAILURE
} execStatus_t;

execStatus_t execute(token_t* toks);

#endif // TOKENS_H_
