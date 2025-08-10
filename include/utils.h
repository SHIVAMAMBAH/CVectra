/* utils.h */

#ifndef UTILS_H
#define UTILS_H


/* Arithmetic Operations */
struct Vector *Add(struct Vector *vec1, struct Vector *vec2);
struct Vector *Sub(struct Vector *vec1, struct Vector *vec2);

/* Scalar Operations */
struct Vector *ScalarMultiplication(struct Vector *vec1, double scalar);
struct Vector *ScalarAddition(struct Vector *vec1, double scalar);
struct Vector *ScalarSubtraction(struct Vector *vec1, double scalar);
struct Vector *ScalarDivision(struct Vector *vec1, double scalar);


/* Single Number Output Operations*/
double Max(struct Vector *vec);
double Min(struct Vector *vec);
double Mean(struct Vector *vec);
double Median(struct Vector *vec);
double Mode(struct Vector *vec);
double StandardDeviation(struct Vector *vec);
double Varience(struct Vector *vec);
double NonZeroElemenetCount(struct Vector *vec);

/* Element Search & Position */
int IndexOfMax(struct Vector *vec);
int IndexOfMin(struct Vector *vec);
int IndexOfValue(struct Vector *vec, double value);
bool IsContainsValue(struct Vector *vec, double value); 


/* Normalization */
struct Vector *MinMaxNorm(struct Vector *vec);
struct Vector *ZScoreNorm(struct Vector *vec);
struct Vector *MaxAbsoluteNorm(struct Vector *vec);
struct Vector *DecimalScalingNorm(struct Vector *vec);
struct Vector *RobustScalingNorm(struct Vector *vec);
struct Vector *LogNorm(struct Vector *vec);
struct Vector *SoftmaxNorm(struct Vector *vec);
struct Vector *SigmoidNorm(struct Vector *vec);
struct vector *TanhNorm(struct Vector *vec);
struct Vector *L1Norm(struct Vector *vec);
struct Vector *L2Norm(struct Vector *vec);


/* Structural Modifications */
struct Vector *Reverse(struct Vector *vec);
struct Vector *Rotate(struct Vector *vec);
struct Vector *Shuffle(struct Vector *vec);
struct Vector *RemoveDuplicates(struct Vector *vec);


#endif
