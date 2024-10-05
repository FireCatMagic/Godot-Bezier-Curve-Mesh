#pragma once
#include "godot_cpp/classes/mesh.hpp"

namespace godot {
	class CurveMesh3D: public Mesh {
		GDCLASS(CurveMesh3D, Mesh)
	protected:
		static void _bind_methods();
	public:
	};
}