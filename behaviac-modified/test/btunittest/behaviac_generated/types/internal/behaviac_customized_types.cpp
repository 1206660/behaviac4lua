﻿// ---------------------------------------------------------------------
// THIS FILE IS AUTO-GENERATED BY BEHAVIAC DESIGNER, SO PLEASE DON'T MODIFY IT BY YOURSELF!
// ---------------------------------------------------------------------

#include "../behaviac_types.h"

// -------------------
// Customized enums
// -------------------

BEHAVIAC_BEGIN_ENUM_EX(EnumTest, EnumTest)
{
	BEHAVIAC_ENUMCLASS_DISPLAY_INFO_EX(L"EnumTest", L"EnumTest");

	BEHAVIAC_ENUM_ITEM_EX(EnumTest_One, "EnumTest_One").DISPLAY_INFO(L"EnumTest_One", L"EnumTest_One");
	BEHAVIAC_ENUM_ITEM_EX(EnumTest_OneAfterOne, "EnumTest_OneAfterOne").DISPLAY_INFO(L"EnumTest_OneAfterOne", L"EnumTest_OneAfterOne");
}
BEHAVIAC_END_ENUM_EX()

BEHAVIAC_BEGIN_ENUM_EX(FSMAgentTest::EMessage, EMessage)
{
	BEHAVIAC_ENUMCLASS_DISPLAY_INFO_EX(L"FSMAgentTest_EMessage", L"FSMAgentTest_EMessage");

	BEHAVIAC_ENUM_ITEM_EX(FSMAgentTest::Invalid, "Invalid").DISPLAY_INFO(L"Invalid", L"Invalid");
	BEHAVIAC_ENUM_ITEM_EX(FSMAgentTest::Begin, "Begin").DISPLAY_INFO(L"Begin", L"Begin");
	BEHAVIAC_ENUM_ITEM_EX(FSMAgentTest::End, "End").DISPLAY_INFO(L"End", L"End");
	BEHAVIAC_ENUM_ITEM_EX(FSMAgentTest::Pause, "Pause").DISPLAY_INFO(L"Pause", L"Pause");
	BEHAVIAC_ENUM_ITEM_EX(FSMAgentTest::Resume, "Resume").DISPLAY_INFO(L"Resume", L"Resume");
	BEHAVIAC_ENUM_ITEM_EX(FSMAgentTest::Exit, "Exit").DISPLAY_INFO(L"Exit", L"Exit");
}
BEHAVIAC_END_ENUM_EX()

BEHAVIAC_BEGIN_ENUM_EX(TNS::NE::NAT::eColor, eColor)
{
	BEHAVIAC_ENUMCLASS_DISPLAY_INFO_EX(L"色彩枚举", L"eColor 是一个用于测试枚举使用的类型");

	BEHAVIAC_ENUM_ITEM_EX(TNS::NE::NAT::RED, "RED").DISPLAY_INFO(L"红色 Red", L"Red 是一种非常激进的色彩");
	BEHAVIAC_ENUM_ITEM_EX(TNS::NE::NAT::GREEN, "GREEN").DISPLAY_INFO(L"GREEN", L"GREEN");
	BEHAVIAC_ENUM_ITEM_EX(TNS::NE::NAT::BLUE, "BLUE").DISPLAY_INFO(L"BLUE", L"BLUE");
	BEHAVIAC_ENUM_ITEM_EX(TNS::NE::NAT::YELLOW, "YELLOW").DISPLAY_INFO(L"YELLOW", L"YELLOW");
	BEHAVIAC_ENUM_ITEM_EX(TNS::NE::NAT::WHITE, "WHITE").DISPLAY_INFO(L"WHITE", L"WHITE");
}
BEHAVIAC_END_ENUM_EX()

BEHAVIAC_BEGIN_ENUM_EX(ETest, ETest)
{
	BEHAVIAC_ENUMCLASS_DISPLAY_INFO_EX(L"ETest", L"ETest");

	BEHAVIAC_ENUM_ITEM_EX(EA, "EA");
	BEHAVIAC_ENUM_ITEM_EX(EB, "EB");
	BEHAVIAC_ENUM_ITEM_EX(EC, "EC");
}
BEHAVIAC_END_ENUM_EX()

