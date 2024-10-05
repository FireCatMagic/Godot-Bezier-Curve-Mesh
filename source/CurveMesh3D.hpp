#pragma once
#include "godot_cpp/classes/mesh.hpp"
#include "godot_cpp/classes/curve3d.hpp"

namespace godot {
	class CurveMesh3D: public Mesh {
		GDCLASS(CurveMesh3D, Mesh)
	protected:
		static void _bind_methods();
	private:
		PackedVector2Array polygon; // The 2D shape to use
		Ref<Curve3D> curve;
	public:
		void set_polygon(PackedVector2Array new_polygon);
		PackedVector2Array get_polygon();

		void set_curve(Ref<Curve3D> new_curve);
		Ref<Curve3D> get_curve();

		AABB _get_aabb() const override;
		int32_t _get_blend_shape_count() const override;
		int32_t _get_surface_count() const override;
	};
}