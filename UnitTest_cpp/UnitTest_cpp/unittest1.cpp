#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Inventario/Item.h"
#include "../Inventario/Inventario.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_cpp
{		
	TEST_CLASS(teste_Inventario)
	{
	public:
		Inventario inv;
		TEST_METHOD(InsereInventario)
		{
			Item * It = new Item();
			int result = 1;
			int atual = inv.insereItem(It);
			Assert::AreEqual(result, atual);

		}
	

	};
}