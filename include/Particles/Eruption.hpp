/* Eruption.hpp

Copyright (c) 2010 - 2011 by Felix Lauer and Simon Schneegans

This program is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option)
any later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
more details.

You should have received a copy of the GNU General Public License along with
this program.  If not, see <http://www.gnu.org/licenses/>. */

# ifndef ERUPTION_HPP_INCLUDED
# define ERUPTION_HPP_INCLUDED

# include "Particles/Particle.hpp"

# include "System/Color3f.hpp"

class Eruption: public Particle<Eruption> {
    public:
        Eruption(Vector2f const& location, Vector2f const& direction, Vector2f const& velocity, Color3f const& color, Player* damageSource);

        void update();
        void draw() const;

        friend class Particle<Eruption>;

    private:
        Color3f color_;
        static std::list<Eruption*> activeParticles_;
};

# endif // ERUPTION_HPP_INCLUDED


