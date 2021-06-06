#ifndef GD_GODOT_ROCKET_H
#define GD_GODOT_ROCKET_H

#include "core/reference.h"
#include "scene/gui/control.h"

class GodotRocket;

class GdRocketControl : public Control {
	GDCLASS(GdRocketControl, Control);

	private:
		GodotRocket *plugin;

	protected:
		static void _bind_methods();

		void _notification(int p_what);

	public:
		GdRocketControl();
		~GdRocketControl();
};

#endif // GD_GODOT_ROCKET_H
