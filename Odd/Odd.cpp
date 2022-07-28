/* Odd.cpp : Into the Odd Character Generator
 * Copyright (c) 2019 Steve Simenic
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#include "roll.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() 
{
	int strength = roll() + roll() + roll();
	int dexterity = roll() + roll() + roll();
	int wisdom = roll() + roll() + roll();
	int hit_points = roll();

	int max_score = std::max({ strength - 9, dexterity - 9, wisdom - 9, 0 }); // convert to array index

	const std::vector<std::vector<std::string>> gear{ {
		{
			"Sword (d6), Pistol (d6), Modern Armour, Sense nearby unearthly beings",
			"Rifle (d8), Bayonet (d6), Lighter Boy, Arcanum",
			"Rifle (d8), Modern Armour, Hound, Arcanum",
			"Club (d6), Throwing Knives, Arcanum",
			"Pistol (d6), Ether, Poison, Arcanum",
			"Cane (d6), Acid, Spyglass, Arcanum",
			"Pistol Brace (d8), Canary, Ether",
			"Musket (d8), Pocket-watch, Bomb",
			"Halberd (d8), Fake Pistol, Artificial Lung",
			"Garotte (d6), Musket (d8), Mute"
		},
		{
			"Musket (d8), Sword (d6), Flashbang, Sense nearby Arcana.",
			"Musket (d8), Hatchet (d6), Hawk, Arcanum",
			"Hatchet (d6), Pistol (d6), Bolt-Cutters, Arcanum",
			"Musket (d8), Mule, Arcanum",
			"Sword (d6), Pistol (d6), Modern Armour",
			"Pistol (d6), Bell, Steel Wire, Smoke-bomb",
			"Longaxe (d8), Ferret, Fire Oil",
			"Staff (d8), Tongs, Glue",
			"Pistol (d6), Net, Prosthetic Leg, Trumpet",
			"Pistol (d6), Grease, Hacksaw, One Arm"
		},
		{
			"Musket (d8), Club (d6), Immunity to extreme heat and cold",
			"Musket (d8), Protective Gloves, Arcanum",
			"Musket (d8), Mallet, Marbles, Fancy Hat, Arcanum",
			"Pick-Axe (d6), Manacles, Arcanum",
			"Pistol (d6), Smoke-bomb, Mutt, Shovel",
			"Longaxe (d8), Throwing Axes, Fire Oil",
			"Club (d6), Ether, Crowbar, Flute",
			"Hatchet (d6), Net, Fire Oil, Burnt Face",
			"Club (d6), Paint, Crowbar, Loud Lungs",
			"Pistol (d6), Cigars, Poison, Fugitive"
		},
		{
			"Pistol (d6), Knife (d6), Telepathy if target fails WIL SAVE",
			"Claymore (d8), Pistol (d6), 2 Acid Flasks, Arcanum",
			"Musket (d8), Bayonet (d6), Mutt with telepathic link",
			"Pistol (d6), Toxin-Immune, Rocket",
			"Musket (d8), Portable Ram, Game Set",
			"Pistol (d6), Saw, Animal Trap, Spyglass",
			"Bow (d6), Knife (d6), Rocket, Fire Oil",
			"Pistol (d6), Whip (d6), Cigars, Lost Eye",
			"Musket (d8), Accordion, No Nose/Scent",
			"Sword (d6), Shield Armour, Illiterate"
		},
		{
			"Blunderbuss (d8), Hatchet (d6), Mutt, Dreams show your undiscovered surroundings",
			"Pistol Brace (d8), Steel Wire, Grappling Hook, Arcanum",
			"Machete (d6), Pistol Brace (d8), Talking Parrot, Never Sleep",
			"Harpoon Gun (d8), Baton (d6), Acid, Slightly Magnetic",
			"Pistol (d6), Ether, Poison, Arcanum",
			"Bolt-Cutters, Blunderbuss (d8), Fiddle",
			"Sword & Dagger (d8), Magnifying Glass, Lost Eye",
			"Pistol (d6), Acid, Animal Repellent, Prosthetic Hand",
			"Sword (d6), Steel Wire, Ugly Mutation",
			"Sword (d6), Ferret, Tattered Clothes, Debt (3g)"
		},
		{
			"Musket (d8), Hatchet (d6), Flashbang, Iron Limb, Arcanum",
			"Rifle (d8), Mace (d6), Eagle, Poison",
			"Club (d6), 3 Bombs, Rocket, Darkvision",
			"Maul (d8), Dagger (d6), Chain",
			"Longaxe (d8), Rum, Bomb",
			"Dagger (d6), Fire Oil, Mirror",
			"Pistol (d6), Knife (d6), Bomb, Saw",
			"Pistol (d6), Bomb, Shovel, Glowing Eyes",
			"Staff (d8), Throwing, Knives (d6)",
			"Mace (d6), Pigeon, Disfigured"
		}
	} };

	std::string equipment = gear[hit_points - 1][max_score];

	std::cout << "Strength: " << strength << "\n";
	std::cout << "Dexterity: " << dexterity << "\n";
	std::cout << "Wisdom: " << wisdom << "\n";
	std::cout << "Hit Points: " << hit_points << "\n";
	std::cout << "Equipment: " << equipment << "\n";
}
