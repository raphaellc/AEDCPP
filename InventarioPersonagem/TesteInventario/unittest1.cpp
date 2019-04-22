#include "stdafx.h"
#include "CppUnitTest.h"
#include "../InventarioPersonagem/Item.h"
#include "../InventarioPersonagem/Inventario.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
//https://stackoverflow.com/questions/19886397/how-to-solve-the-error-lnk2019-unresolved-external-symbol-function
namespace UnitTest_cpp
{
	TEST_CLASS(teste_Inventario)
	{
	public:
		Inventario inv;
		TEST_METHOD(InsereInventario)
		{
			Item * It = new Item;
			int result = 1;
			int atual = inv.insereItem(It);
			Assert::AreEqual(result, 1);

		}


	};
}