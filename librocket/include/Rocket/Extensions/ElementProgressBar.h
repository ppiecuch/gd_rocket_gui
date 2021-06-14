/*
 * This source file is part of libRocket, the HTML/CSS Interface Middleware
 *
 * For the latest information, see http://www.librocket.com
 *
 * Copyright (c) 2008-2010 CodePoint Ltd, Shift Technology Ltd
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#ifndef ROCKETPROGRESSBARELEMENTPROGRESSBAR_H
#define ROCKETPROGRESSBARELEMENTPROGRESSBAR_H

#include "Rocket/Core/Element.h"
#include "Rocket/Core/Geometry.h"
#include "Rocket/Core/Texture.h"

namespace Rocket {
namespace ProgressBar {

/**
	A progress bar element using a value between 0 and 1.

	@author Gauthier Billot
 */

class ElementProgressBar : public Core::Element
{
public:
	/// Constructs a new ElementProgressBar. This should not be called directly; use the Factory instead.
	/// @param[in] tag The tag the element was declared as in RML.
	ElementProgressBar(const Rocket::Core::String& tag);
	virtual ~ElementProgressBar();

	/// Returns float value between 0 and 1.
	/// @return The value of the progress bar.
	float GetValue() const;
	/// Sets the current value of the progress bar.
	/// @param[in] value The new value of the progress bar.
	void SetValue(const float value);

protected:
	/// Called during the update loop after children are updated.
	virtual void OnUpdate();
	/// Called during render after backgrounds, borders, decorators, but before children, are rendered.
	virtual void OnRender();

	/// Called when attributes on the element are changed.
	/// @param[in] changed_attributes The attributes changed on the element.
	virtual void OnAttributeChange(const Core::AttributeNameList& changed_attributes);
	/// Called when properties on the element are changed.
	/// @param[in] changed_properties The properties changed on the element.
	virtual void OnPropertyChange(const Core::PropertyNameList& changed_properties);

private:
	/// Called when value has changed.
	void GenerateGeometry();

	/// Called when source texture has changed.
	void LoadTexture(int index);

	Core::Texture texture[3];

	// The geometries used to render this element.
	Core::Geometry left_geometry;
	Core::Geometry center_geometry;
	Core::Geometry right_geometry;
	bool geometry_dirty;

	// The current value of the progress bar.
	float value;
};

}
}

#endif // ROCKETPROGRESSBARELEMENTPROGRESSBAR_H
