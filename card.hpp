#pragma once

#include <iostream>
#include <string>


struct Card
{
  public:
    //Constructors
    Card(bool        state = {false},
        std::string image = {}       );

    Card &  operator=( Card const &  rhs   ) &         ;
    Card &  operator=( Card       && rhs   ) & noexcept;
    Card             ( Card const  &  other)           ;
    Card             ( Card        && other)   noexcept;
    ~Card            (                     )   noexcept;

    //Accessors
    bool        const & getState() const &;
    std::string const & getImage() const &;

    bool                getState()       &&;
    std::string         getImage()       &&;

    //Modifiers
    void setState(bool);
    void setImage(std::string);

    // Member Variables
    bool _state;
    std::string _image;

};
