/* arcanum.cpp : Into the Odd Character Generator
 * Copyright (c) 2022 Steve Simenic
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

#include "arcanum.h"

std::string generate_arcanum(int r1, int r2)
// accepts d66, returns an arcanum string
{
    const std::vector<std::vector<std::string>> arcana{ {
        {"Gatekeeper's Sigil", "Pierced Heart", "Pale Flame", "Soul Chain", "Gavel of the Unbreakable Seal", "Foul Censer"},
        {"Bleeding Stave", "Pain Idol", "Webbed Hands", "Sunblessed Bands", "Flesh-Tome of Babble", "Tyrant's Rod"},
        {"Black Veil", "Strands of Suffering", "Heat Ray", "Miniaturisation Coil", "Frozen Cloud", "Many Phase Key"},
        {"Skull Magnet", "Transreal Mirror", "Gorger's Mask", "Tomb Box", "Howling Lantern", "Rainbow Blade"},
        {"Hawk of Prosperity", "Inquisitor's Hood", "Winter's Sickle", "Grief Cup", "Victory Globe", "Moon Lens"},
        {"Fool's Coin", "Chance Rose", "Homing Stick", "False Platter", "Gold Visor", "Infinity Icon"}
    } };
    return arcana[r1 - 1][r2 - 1];
}
