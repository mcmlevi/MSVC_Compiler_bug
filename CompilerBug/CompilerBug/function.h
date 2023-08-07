#pragma once

namespace Foo
{
	template<typename Item>
	void templatedFunc(Item)
	{
		void someFunc(int);
		someFunc(0);
	}
}
