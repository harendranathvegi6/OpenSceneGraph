// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingBox>
#include <osg/BoundingSphere>
#include <osg/CullingSet>
#include <osg/Matrix>
#include <osg/Node>
#include <osg/Polytope>
#include <osg/ShadowVolumeOccluder>
#include <osg/StateSet>
#include <osg/Vec3>
#include <osg/Vec4>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::pair< osg::ref_ptr< osg::StateSet > COMMA  osg::Polytope >, osg::CullingSet::StateFrustumPair);

TYPE_NAME_ALIAS(std::vector< osg::CullingSet::StateFrustumPair >, osg::CullingSet::StateFrustumList);

TYPE_NAME_ALIAS(std::vector< osg::ShadowVolumeOccluder >, osg::CullingSet::OccluderList);

TYPE_NAME_ALIAS(unsigned int, osg::CullingSet::Mask);

BEGIN_ENUM_REFLECTOR(osg::CullingSet::MaskValues)
	I_EnumLabel(osg::CullingSet::NO_CULLING);
	I_EnumLabel(osg::CullingSet::VIEW_FRUSTUM_SIDES_CULLING);
	I_EnumLabel(osg::CullingSet::NEAR_PLANE_CULLING);
	I_EnumLabel(osg::CullingSet::FAR_PLANE_CULLING);
	I_EnumLabel(osg::CullingSet::VIEW_FRUSTUM_CULLING);
	I_EnumLabel(osg::CullingSet::SMALL_FEATURE_CULLING);
	I_EnumLabel(osg::CullingSet::SHADOW_OCCLUSION_CULLING);
	I_EnumLabel(osg::CullingSet::DEFAULT_CULLING);
	I_EnumLabel(osg::CullingSet::ENABLE_ALL_CULLING);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::CullingSet)
	I_BaseType(osg::Referenced);
	I_Constructor0();
	I_Constructor1(IN, const osg::CullingSet &, cs);
	I_Constructor3(IN, const osg::CullingSet &, cs, IN, const osg::Matrix &, matrix, IN, const osg::Vec4 &, pixelSizeVector);
	I_Method1(void, set, IN, const osg::CullingSet &, cs);
	I_Method3(void, set, IN, const osg::CullingSet &, cs, IN, const osg::Matrix &, matrix, IN, const osg::Vec4 &, pixelSizeVector);
	I_Method1(void, setCullingMask, IN, osg::CullingSet::Mask, mask);
	I_Method0(osg::CullingSet::Mask, getCullingMask);
	I_Method1(void, setFrustum, IN, osg::Polytope &, cv);
	I_Method0(osg::Polytope &, getFrustum);
	I_Method0(const osg::Polytope &, getFrustum);
	I_Method2(void, addStateFrustum, IN, osg::StateSet *, stateset, IN, osg::Polytope &, polytope);
	I_Method1(void, getStateFrustumList, IN, osg::CullingSet::StateFrustumList &, sfl);
	I_Method0(osg::CullingSet::StateFrustumList &, getStateFrustumList);
	I_Method1(void, addOccluder, IN, osg::ShadowVolumeOccluder &, cv);
	I_Method1(void, setPixelSizeVector, IN, const osg::Vec4 &, v);
	I_Method0(osg::Vec4 &, getPixelSizeVector);
	I_Method0(const osg::Vec4 &, getPixelSizeVector);
	I_Method1(void, setSmallFeatureCullingPixelSize, IN, float, value);
	I_Method0(float &, getSmallFeatureCullingPixelSize);
	I_Method0(float, getSmallFeatureCullingPixelSize);
	I_Method2(float, pixelSize, IN, const osg::Vec3 &, v, IN, float, radius);
	I_Method1(float, pixelSize, IN, const osg::BoundingSphere &, bs);
	I_Method2(float, clampedPixelSize, IN, const osg::Vec3 &, v, IN, float, radius);
	I_Method1(float, clampedPixelSize, IN, const osg::BoundingSphere &, bs);
	I_Method1(bool, isCulled, IN, const std::vector< osg::Vec3 > &, vertices);
	I_Method1(bool, isCulled, IN, const osg::BoundingBox &, bb);
	I_Method1(bool, isCulled, IN, const osg::BoundingSphere &, bs);
	I_Method0(void, pushCurrentMask);
	I_Method0(void, popCurrentMask);
	I_Method1(void, disableAndPushOccludersCurrentMask, IN, osg::NodePath &, nodePath);
	I_Method1(void, popOccludersCurrentMask, IN, osg::NodePath &, nodePath);
	I_WriteOnlyProperty(const osg::CullingSet &, );
	I_Property(osg::CullingSet::Mask, CullingMask);
	I_Property(osg::Polytope &, Frustum);
	I_Property(const osg::Vec4 &, PixelSizeVector);
	I_Property(float, SmallFeatureCullingPixelSize);
	I_ReadOnlyProperty(osg::CullingSet::StateFrustumList &, StateFrustumList);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::StateSet >)
	I_Constructor0();
	I_Constructor1(IN, osg::StateSet *, ptr);
	I_Constructor1(IN, const osg::ref_ptr< osg::StateSet > &, rp);
	I_Method0(osg::StateSet *, get);
	I_Method0(bool, valid);
	I_Method0(osg::StateSet *, release);
	I_Method1(void, swap, IN, osg::ref_ptr< osg::StateSet > &, rp);
	I_ReadOnlyProperty(osg::StateSet *, );
END_REFLECTOR

STD_PAIR_REFLECTOR(std::pair< osg::ref_ptr< osg::StateSet > COMMA  osg::Polytope >);

STD_VECTOR_REFLECTOR(std::vector< osg::CullingSet::StateFrustumPair >);

