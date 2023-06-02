#include "node.h"

Node* ROOT;

llvm::Type* getLlvmType(int type, int arraySize){
        switch (type) {
        case TYPE_INT:
            return llvm::Type::getInt32Ty(context);
            break;
        case TYPE_INT + ARRAY:
            if (arraySize > 0) {
                return llvm::ArrayType::get(llvm::Type::getInt32Ty(context), arraySize);
            } else {
                return llvm::Type::getInt32PtrTy(context);
            }
            break;
        case TYPE_FLOAT:
            return llvm::Type::getFloatTy(context);
            break;
        case TYPE_FLOAT + ARRAY:
            if (arraySize > 0) {
                return llvm::ArrayType::get(llvm::Type::getFloatTy(context), arraySize);
            } else {
                return llvm::Type::getFloatPtrTy(context);
            }
            break;
        case TYPE_BOOL:
            return llvm::Type::getInt1Ty(context);
            break;
        case TYPE_BOOL + ARRAY:
            if (arraySize > 0) {
                return llvm::ArrayType::get(llvm::Type::getInt1Ty(context), arraySize);
            } else {
                return llvm::Type::getInt1PtrTy(context);
            }
            break;
        case TYPE_CHAR:
            return llvm::Type::getInt8Ty(context);
            break;
        case TYPE_CHAR + ARRAY:
            if (arraySize > 0) {
                return llvm::ArrayType::get(llvm::Type::getInt8Ty(context), arraySize);
            } else {
                return llvm::Type::getInt8PtrTy(context);
            }
            break;
        default:
            break;
    }
    return llvm::Type::getVoidTy(context);
}