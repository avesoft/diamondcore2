#include "ScriptedPch.h"

#ifndef DEF_FORGE_OF_SOULS_H
#define DEF_FORGE_OF_SOULS_H

enum soulforge_spells
{
	/****** SPEC WARDEN ******/
	SPELL_SCHATTENSCHLEIER = 69633,
	SPELL_KLAGE_DER_SEELEN = 69148,

	/****** SOUL WARDEN ******/
	SPELL_TOTENERWECKUNG = 69562,
	SPELL_SEELENKRANKHEIT = 69131,
	SPELL_SHADOWBOLT = 69068,
	SPELL_SEELENENTZUG = 69128,

	/****** SOUL SCARE ******/
	SPELL_SOUL_HIT = 70211,

	/****** WARDEN ******/
	SPELL_HIT = 14516,
	SPELL_RUNENHUELLE = 69056,
	SPELL_ENTWAFFNEN = 6713,
	SPELL_DEMOSHOUT = 16244,

	/******BRONJAHM CAST******/
	SAY_AGGRO = 16595,
	SPELL_MAGIC_BANE = 68793,
	SPELL_SHADOW_BOLT = 70043,
	SPELL_CORRUPT_SOUL = 68839,
	SPELL_CORRUPT_SOUL_FRAGMENT = 36535,
	SPELL_CONSUME_SOUL = 68858,
	SPELL_TELEPORT = 68988,
	SPELL_SOULSTORM = 68872,
	SPELL_FEAR = 68950
};

enum Data
{
    DATA_BRONJAHM_EVENT,
    DATA_DEVOURER_EVENT
};
enum Creatures
{
    CREATURE_BRONJAHM = 36497,
    CREATURE_DEVOURER = 36502
};

#endif