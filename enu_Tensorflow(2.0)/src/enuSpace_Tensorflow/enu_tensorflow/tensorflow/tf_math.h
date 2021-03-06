#pragma once

#ifndef _TF_MATH_HEADER_
#define _TF_MATH_HEADER_

#include <string>
#include "jsoncpp/json.h"
#include "utility_functions.h"

void* Create_Abs(std::string id, Json::Value pInputItem);
void* Create_Acos(std::string id, Json::Value pInputItem);
void* Create_Add(std::string id, Json::Value pInputItem);
void* Create_AddN(std::string id, Json::Value pInputItem);
void* Create_All(std::string id, Json::Value pInputItem);
void* Create_Any(std::string id, Json::Value pInputItem);
void* Create_ApproximateEqual(std::string id, Json::Value pInputItem);
void* Create_ArgMax(std::string id, Json::Value pInputItem);
void* Create_ArgMin(std::string id, Json::Value pInputItem);
void* Create_Asin(std::string id, Json::Value pInputItem);
void* Create_Atan(std::string id, Json::Value pInputItem);
void* Create_Atan2(std::string id, Json::Value pInputItem);
void* Create_BatchMatMul(std::string id, Json::Value pInputItem);
void* Create_Betainc(std::string id, Json::Value pInputItem);
void* Create_Bincount(std::string id, Json::Value pInputItem);
void* Create_Bucketize(std::string id, Json::Value pInputItem);
void* Create_Cast(std::string id, Json::Value pInputItem);
void* Create_Ceil(std::string id, Json::Value pInputItem);
void* Create_Complex(std::string id, Json::Value pInputItem);
void* Create_ComplexAbs(std::string id, Json::Value pInputItem);
void* Create_Conj(std::string id, Json::Value pInputItem);
void* Create_Cos(std::string id, Json::Value pInputItem);
void* Create_Cosh(std::string id, Json::Value pInputItem);
void* Create_Cross(std::string id, Json::Value pInputItem);
void* Create_Cumprod(std::string id, Json::Value pInputItem);
void* Create_Cumsum(std::string id, Json::Value pInputItem);
void* Create_Digamma(std::string id, Json::Value pInputItem);
void* Create_Div(std::string id, Json::Value pInputItem);
void* Create_Equal(std::string id, Json::Value pInputItem);
void* Create_Erf(std::string id, Json::Value pInputItem);
void* Create_Erfc(std::string id, Json::Value pInputItem);
void* Create_Exp(std::string id, Json::Value pInputItem);
void* Create_Expm1(std::string id, Json::Value pInputItem);
void* Create_Floor(std::string id, Json::Value pInputItem);
void* Create_FloorDiv(std::string id, Json::Value pInputItem);
void* Create_FloorMod(std::string id, Json::Value pInputItem);
void* Create_Greater(std::string id, Json::Value pInputItem);
void* Create_GreaterEqual(std::string id, Json::Value pInputItem);
void* Create_Igamma(std::string id, Json::Value pInputItem);
void* Create_Igammac(std::string id, Json::Value pInputItem);
void* Create_Imag(std::string id, Json::Value pInputItem);
void* Create_IsFinite(std::string id, Json::Value pInputItem);
void* Create_IsInf(std::string id, Json::Value pInputItem);
void* Create_IsNan(std::string id, Json::Value pInputItem);
void* Create_Less(std::string id, Json::Value pInputItem);
void* Create_LessEqual(std::string id, Json::Value pInputItem);
void* Create_Lgamma(std::string id, Json::Value pInputItem);
void* Create_LinSpace(std::string id, Json::Value pInputItem);
void* Create_Log(std::string id, Json::Value pInputItem);
void* Create_Log1p(std::string id, Json::Value pInputItem);
void* Create_LogicalAnd(std::string id, Json::Value pInputItem);
void* Create_LogicalNot(std::string id, Json::Value pInputItem);
void* Create_LogicalOr(std::string id, Json::Value pInputItem);
void* Create_MatMul(std::string id, Json::Value pInputItem);
void* Create_Max(std::string id, Json::Value pInputItem);
void* Create_Maximum(std::string id, Json::Value pInputItem);
void* Create_Mean(std::string id, Json::Value pInputItem);
void* Create_Min(std::string id, Json::Value pInputItem);
void* Create_Minimum(std::string id, Json::Value pInputItem);
void* Create_Mod(std::string id, Json::Value pInputItem);
void* Create_Multiply(std::string id, Json::Value pInputItem);
void* Create_Negate(std::string id, Json::Value pInputItem);
void* Create_NotEqual(std::string id, Json::Value pInputItem);
void* Create_Polygamma(std::string id, Json::Value pInputItem);
void* Create_Pow(std::string id, Json::Value pInputItem);
void* Create_Prod(std::string id, Json::Value pInputItem);
void* Create_QuantizeDownAndShrinkRange(std::string id, Json::Value pInputItem);
void* Create_QuantizedMatMul(std::string id, Json::Value pInputItem);
void* Create_QuantizedMul(std::string id, Json::Value pInputItem);
void* Create_Range(std::string id, Json::Value pInputItem);
void* Create_Real(std::string id, Json::Value pInputItem);
void* Create_RealDiv(std::string id, Json::Value pInputItem);
void* Create_Reciprocal(std::string id, Json::Value pInputItem);
void* Create_RequantizationRange(std::string id, Json::Value pInputItem);
void* Create_Requantize(std::string id, Json::Value pInputItem);
void* Create_Rint(std::string id, Json::Value pInputItem);
void* Create_Round(std::string id, Json::Value pInputItem);
void* Create_Rsqrt(std::string id, Json::Value pInputItem);
void* Create_SegmentMax(std::string id, Json::Value pInputItem);
void* Create_SegmentMean(std::string id, Json::Value pInputItem);
void* Create_SegmentMin(std::string id, Json::Value pInputItem);
void* Create_SegmentProd(std::string id, Json::Value pInputItem);
void* Create_SegmentSum(std::string id, Json::Value pInputItem);
void* Create_Sigmoid(std::string id, Json::Value pInputItem);
void* Create_Sign(std::string id, Json::Value pInputItem);
void* Create_Sin(std::string id, Json::Value pInputItem);
void* Create_Sinh(std::string id, Json::Value pInputItem);
void* Create_SparseMatMul(std::string id, Json::Value pInputItem);
void* Create_SparseSegmentMean(std::string id, Json::Value pInputItem);
void* Create_SparseSegmentMeanGrad(std::string id, Json::Value pInputItem);
void* Create_SparseSegmentSqrtN(std::string id, Json::Value pInputItem);
void* Create_SparseSegmentSqrtNGrad(std::string id, Json::Value pInputItem);
void* Create_SparseSegmentSum(std::string id, Json::Value pInputItem);
void* Create_Sqrt(std::string id, Json::Value pInputItem);
void* Create_Square(std::string id, Json::Value pInputItem);
void* Create_SquaredDifference(std::string id, Json::Value pInputItem);
void* Create_Subtract(std::string id, Json::Value pInputItem);
void* Create_Sum(std::string id, Json::Value pInputItem);
void* Create_Tan(std::string id, Json::Value pInputItem);
void* Create_Tanh(std::string id, Json::Value pInputItem);
void* Create_TruncateDiv(std::string id, Json::Value pInputItem);
void* Create_TruncateMod(std::string id, Json::Value pInputItem);
void* Create_UnsortedSegmentMax(std::string id, Json::Value pInputItem);
void* Create_UnsortedSegmentSum(std::string id, Json::Value pInputItem);
void* Create_Where3(std::string id, Json::Value pInputItem);
void* Create_Zeta(std::string id, Json::Value pInputItem);

#endif