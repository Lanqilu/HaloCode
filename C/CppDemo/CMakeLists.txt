cmake_minimum_required(VERSION 3.20)
project(CppDemo)

set(CMAKE_CXX_STANDARD 23)

# Array
add_executable(ArrayDefine array/arrayDefine.cpp)
add_executable(ArrayInfo array/arrayInfo.cpp)
add_executable(ArrayReverse array/arrayReverse.cpp)

# Sort
add_executable(BubbleSort sort/bubbleSort.cpp)
add_executable(BubbleSortPointer sort/bubbleSortPointer.cpp)

# Pointer
add_executable(PointerDefine pointer/pointerDefine.cpp)
add_executable(PointerInfo pointer/pointerInfo.cpp)
add_executable(PointerConst pointer/pointerConst.cpp)
add_executable(PointerArray pointer/pointerArray.cpp)
add_executable(PointerFunction pointer/pointerFunction.cpp)

# struct
add_executable(StructDefine struct/structDefine.cpp)
add_executable(StructArray struct/structArray.cpp)
add_executable(StructPointer struct/structPointer.cpp)
add_executable(StructNest struct/structNest.cpp)
add_executable(StructFunction struct/structFunction.cpp)

## oop
add_executable(GlobalArea oop/globalArea.cpp)
add_executable(StackArea oop/stackArea.cpp)
add_executable(HeapArea oop/heapArea.cpp)
add_executable(Reference oop/reference.cpp)
add_executable(ReferenceFunction oop/referenceFunction.cpp)
add_executable(ReferenceFunctionReturn oop/referenceFunctionReturn.cpp)
add_executable(ReferenceEssence oop/referenceEssence.cpp)

# function
add_executable(DefaultParameters function/defaultParameters.cpp)
add_executable(Overloading function/overloading.cpp)