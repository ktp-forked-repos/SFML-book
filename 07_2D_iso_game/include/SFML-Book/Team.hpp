#ifndef BOOK_TEAM_HPP
#define BOOK_TEAM_HPP

#include <SFML/Graphics.hpp>
#include <SFML-Book/TeamGui.hpp>
#include <vector>

namespace book
{
    class Team
    {
        public:
            Team(const Team&) = delete;
            Team& operator=(const Team&) = delete;

            Team(sf::RenderWindow& window,int id,const sf::Color& color=sf::Color::White);

            void addGold(int amount);
            void addEnemy(Team* team);
            const std::vector<Team*>& getEnemies()const;

            void  addQgId(std::uint32_t);
            const std::vector<std::uint32_t>& getQgIds()const;
            void removeQgId(std::uint32_t id);

            int id()const;

            bool isAlive;
            TeamGui gui;

        private:
            int _id;
            int _points;
            int _gold;
            std::vector<std::uint32_t> _QGId;

            std::vector<Team*> _enemies;


    };
}
#endif