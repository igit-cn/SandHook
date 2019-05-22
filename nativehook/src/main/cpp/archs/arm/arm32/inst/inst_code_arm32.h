//
// Created by swift on 2019/5/16.
//

#ifndef SANDHOOK_INST_CODE_ARM32_H
#define SANDHOOK_INST_CODE_ARM32_H

enum class InstCodeA32 {

};

enum class InstCodeT16 {
    BASE_SASMC,
    DATA_PROC,
    SPDIABE,
    MISC,
    B,
    B_COND,
    BX_BLX,
    CBZ_CBNZ,
    LDR_LIT,
    //when rd = rn
    ADD_IMM_RDN,
    //rn = pc
    ADR,
    ADD_REG,
    CMP_REG,
    CMP_REG_EXT,
    MOV_IMM,
    MOV_REG,
    ADD_IMM_RND,
    POP,
    PUSH
};

enum class InstCodeT32 {
    B32,
    LDR_LIT,
    LDR_IMM,
    LDR_UIMM,
    LDRB_LIT,
    MOV_MOVT_IMM
};

#endif //SANDHOOK_INST_CODE_ARM32_H