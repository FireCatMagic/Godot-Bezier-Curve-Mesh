#include "CurveMesh3D.hpp"
#include <godot_cpp/core/class_db.hpp>
#include "godot_cpp/variant/utility_functions.hpp"


using namespace godot;

void CurveMesh3D::_bind_methods() {
	ClassDB::bind_method(D_METHOD("set_polygon", "polygon"), &CurveMesh3D::set_polygon);
	ClassDB::bind_method(D_METHOD("get_polygon"), &CurveMesh3D::get_polygon);
	ClassDB::add_property("CurveMesh3D", PropertyInfo(Variant::PACKED_VECTOR2_ARRAY, "polygon"), "set_polygon", "get_polygon");

	ClassDB::bind_method(D_METHOD("set_curve", "curve"), &CurveMesh3D::set_curve);
	ClassDB::bind_method(D_METHOD("get_curve"), &CurveMesh3D::get_curve);
	ClassDB::add_property("CurveMesh3D", PropertyInfo(Variant::OBJECT, "curve", PROPERTY_HINT_RESOURCE_TYPE, "Curve3D"), "set_curve", "get_curve");

}

void CurveMesh3D::set_polygon(PackedVector2Array new_polygon) {
	polygon = new_polygon;
}

PackedVector2Array CurveMesh3D::get_polygon() {
	return polygon;
}

void CurveMesh3D::set_curve(Ref<Curve3D> new_curve) {
	curve = new_curve;
}

Ref<Curve3D> CurveMesh3D::get_curve() {
	return curve;
}

AABB CurveMesh3D::_get_aabb() const {
	return AABB();
}

int32_t CurveMesh3D::_get_blend_shape_count() const {
	return 0u;
}

int32_t CurveMesh3D::_get_surface_count() const {
	return 0u;
}