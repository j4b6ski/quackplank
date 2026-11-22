#include <box2d/box2d.h>

int b2MinInt_(int a, int b)
{
    return b2MinInt(a, b);
}

int b2MaxInt_(int a, int b)
{
    return b2MaxInt(a, b);
}

int b2AbsInt_(int a)
{
    return b2AbsInt(a);
}

int b2ClampInt_(int a, int lower, int upper)
{
    return b2ClampInt(a, lower, upper);
}

float b2MinFloat_(float a, float b)
{
    return b2MinFloat(a, b);
}

float b2MaxFloat_(float a, float b)
{
    return b2MaxFloat(a, b);
}

float b2AbsFloat_(float a)
{
    return b2AbsFloat(a);
}

float b2ClampFloat_(float a, float lower, float upper)
{
    return b2ClampFloat(a, lower, upper);
}

float b2Dot_(b2Vec2 a, b2Vec2 b)
{
    return b2Dot(a, b);
}

float b2Cross_(b2Vec2 a, b2Vec2 b)
{
    return b2Cross(a, b);
}

b2Vec2 b2CrossVS_(b2Vec2 v, float s)
{
    return b2CrossVS(v, s);
}

b2Vec2 b2CrossSV_(float s, b2Vec2 v)
{
    return b2CrossSV(s, v);
}

b2Vec2 b2LeftPerp_(b2Vec2 v)
{
    return b2LeftPerp(v);
}

b2Vec2 b2RightPerp_(b2Vec2 v)
{
    return b2RightPerp(v);
}

b2Vec2 b2Add_(b2Vec2 a, b2Vec2 b)
{
    return b2Add(a, b);
}

b2Vec2 b2Sub_(b2Vec2 a, b2Vec2 b)
{
    return b2Sub(a, b);
}

b2Vec2 b2Neg_(b2Vec2 a)
{
    return b2Neg(a);
}

b2Vec2 b2Lerp_(b2Vec2 a, b2Vec2 b, float t)
{
    return b2Lerp(a, b, t);
}

b2Vec2 b2Mul_(b2Vec2 a, b2Vec2 b)
{
    return b2Mul(a, b);
}

b2Vec2 b2MulSV_(float s, b2Vec2 v)
{
    return b2MulSV(s, v);
}

b2Vec2 b2MulAdd_(b2Vec2 a, float s, b2Vec2 b)
{
    return b2MulAdd(a, s, b);
}

b2Vec2 b2MulSub_(b2Vec2 a, float s, b2Vec2 b)
{
    return b2MulSub(a, s, b);
}

b2Vec2 b2Abs_(b2Vec2 a)
{
    return b2Abs(a);
}

b2Vec2 b2Min_(b2Vec2 a, b2Vec2 b)
{
    return b2Min(a, b);
}

b2Vec2 b2Max_(b2Vec2 a, b2Vec2 b)
{
    return b2Max(a, b);
}

b2Vec2 b2Clamp_(b2Vec2 v, b2Vec2 a, b2Vec2 b)
{
    return b2Clamp(v, a, b);
}

float b2Length_(b2Vec2 v)
{
    return b2Length(v);
}

float b2Distance_(b2Vec2 a, b2Vec2 b)
{
    return b2Distance(a, b);
}

b2Vec2 b2Normalize_(b2Vec2 v)
{
    return b2Normalize(v);
}

bool b2IsNormalized_(b2Vec2 a)
{
    return b2IsNormalized(a);
}

b2Vec2 b2GetLengthAndNormalize_(float * length, b2Vec2 v)
{
    return b2GetLengthAndNormalize(length, v);
}

b2Rot b2NormalizeRot_(b2Rot q)
{
    return b2NormalizeRot(q);
}

b2Rot b2IntegrateRotation_(b2Rot q1, float deltaAngle)
{
    return b2IntegrateRotation(q1, deltaAngle);
}

float b2LengthSquared_(b2Vec2 v)
{
    return b2LengthSquared(v);
}

float b2DistanceSquared_(b2Vec2 a, b2Vec2 b)
{
    return b2DistanceSquared(a, b);
}

b2Rot b2MakeRot_(float radians)
{
    return b2MakeRot(radians);
}

bool b2IsNormalizedRot_(b2Rot q)
{
    return b2IsNormalizedRot(q);
}

b2Rot b2NLerp_(b2Rot q1, b2Rot q2, float t)
{
    return b2NLerp(q1, q2, t);
}

float b2ComputeAngularVelocity_(b2Rot q1, b2Rot q2, float inv_h)
{
    return b2ComputeAngularVelocity(q1, q2, inv_h);
}

float b2Rot_GetAngle_(b2Rot q)
{
    return b2Rot_GetAngle(q);
}

b2Vec2 b2Rot_GetXAxis_(b2Rot q)
{
    return b2Rot_GetXAxis(q);
}

b2Vec2 b2Rot_GetYAxis_(b2Rot q)
{
    return b2Rot_GetYAxis(q);
}

b2Rot b2MulRot_(b2Rot q, b2Rot r)
{
    return b2MulRot(q, r);
}

b2Rot b2InvMulRot_(b2Rot q, b2Rot r)
{
    return b2InvMulRot(q, r);
}

float b2RelativeAngle_(b2Rot b, b2Rot a)
{
    return b2RelativeAngle(b, a);
}

float b2UnwindAngle_(float radians)
{
    return b2UnwindAngle(radians);
}

b2Vec2 b2RotateVector_(b2Rot q, b2Vec2 v)
{
    return b2RotateVector(q, v);
}

b2Vec2 b2InvRotateVector_(b2Rot q, b2Vec2 v)
{
    return b2InvRotateVector(q, v);
}

b2Vec2 b2TransformPoint_(b2Transform t, const b2Vec2 p)
{
    return b2TransformPoint(t, p);
}

b2Vec2 b2InvTransformPoint_(b2Transform t, const b2Vec2 p)
{
    return b2InvTransformPoint(t, p);
}

b2Transform b2MulTransforms_(b2Transform A, b2Transform B)
{
    return b2MulTransforms(A, B);
}

b2Transform b2InvMulTransforms_(b2Transform A, b2Transform B)
{
    return b2InvMulTransforms(A, B);
}

b2Vec2 b2MulMV_(b2Mat22 A, b2Vec2 v)
{
    return b2MulMV(A, v);
}

b2Mat22 b2GetInverse22_(b2Mat22 A)
{
    return b2GetInverse22(A);
}

b2Vec2 b2Solve22_(b2Mat22 A, b2Vec2 b)
{
    return b2Solve22(A, b);
}

bool b2AABB_Contains_(b2AABB a, b2AABB b)
{
    return b2AABB_Contains(a, b);
}

b2Vec2 b2AABB_Center_(b2AABB a)
{
    return b2AABB_Center(a);
}

b2Vec2 b2AABB_Extents_(b2AABB a)
{
    return b2AABB_Extents(a);
}

b2AABB b2AABB_Union_(b2AABB a, b2AABB b)
{
    return b2AABB_Union(a, b);
}

bool b2AABB_Overlaps_(b2AABB a, b2AABB b)
{
    return b2AABB_Overlaps(a, b);
}

b2AABB b2MakeAABB_(const b2Vec2 * points, int count, float radius)
{
    return b2MakeAABB(points, count, radius);
}

float b2PlaneSeparation_(b2Plane plane, b2Vec2 point)
{
    return b2PlaneSeparation(plane, point);
}

float b2SpringDamper_(float hertz, float dampingRatio, float position, float velocity, float timeStep)
{
    return b2SpringDamper(hertz, dampingRatio, position, velocity, timeStep);
}

bool B2_IS_NULL_b2WorldId_(b2WorldId id)
{
    return B2_IS_NULL(id);
}

bool B2_IS_NULL_b2BodyId_(b2BodyId id)
{
    return B2_IS_NULL(id);
}

bool B2_IS_NULL_b2ShapeId_(b2ShapeId id)
{
    return B2_IS_NULL(id);
}

bool B2_IS_NULL_b2ChainId_(b2ChainId id)
{
    return B2_IS_NULL(id);
}

bool B2_IS_NULL_b2JointId_(b2JointId id)
{
    return B2_IS_NULL(id);
}

bool B2_IS_NON_NULL_b2WorldId_(b2WorldId id)
{
    return B2_IS_NON_NULL(id);
}

bool B2_IS_NON_NULL_b2BodyId_(b2BodyId id)
{
    return B2_IS_NON_NULL(id);
}

bool B2_IS_NON_NULL_b2ShapeId_(b2ShapeId id)
{
    return B2_IS_NON_NULL(id);
}

bool B2_IS_NON_NULL_b2ChainId_(b2ChainId id)
{
    return B2_IS_NON_NULL(id);
}

bool B2_IS_NON_NULL_b2JointId_(b2JointId id)
{
    return B2_IS_NON_NULL(id);
}

uint32_t b2StoreWorldId_(b2WorldId id)
{
    return b2StoreWorldId(id);
}

b2WorldId b2LoadWorldId_(uint32_t x)
{
    return b2LoadWorldId(x);
}

uint64_t b2StoreBodyId_(b2BodyId id)
{
    return b2StoreBodyId(id);
}

b2BodyId b2LoadBodyId_(uint64_t x)
{
    return b2LoadBodyId(x);
}

uint64_t b2StoreShapeId_(b2ShapeId id)
{
    return b2StoreShapeId(id);
}

b2ShapeId b2LoadShapeId_(uint64_t x)
{
    return b2LoadShapeId(x);
}

uint64_t b2StoreChainId_(b2ChainId id)
{
    return b2StoreChainId(id);
}

b2ChainId b2LoadChainId_(uint64_t x)
{
    return b2LoadChainId(x);
}

uint64_t b2StoreJointId_(b2JointId id)
{
    return b2StoreJointId(id);
}

b2JointId b2LoadJointId_(uint64_t x)
{
    return b2LoadJointId(x);
}

extern b2PreSolveFcn preSolve __attribute__((weak));

void registerPreSolve(b2WorldId world, void *context)
{
    b2World_SetPreSolveCallback(world, preSolve, context);
}
