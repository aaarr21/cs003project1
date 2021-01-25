//
//  species.h
//  Orville
//
//  Created by Zhao Dong on 1/23/21.
//
#ifndef SPECIES_H
#define SPECIES_H

#include <string>

class Eevak{
private:
    bool _isRunning;

public:
    Eevak();
    bool isRunning();
    void run();
    void stop();

   
};
class Gelatin{
    private:
    int _weight;
    std::string _shape;
    public:
    Gelatin(int weight);
    bool operator != (const Gelatin& rhs)const;
    int weight();

    const char* shape();
    void morph(std::string shape = "sphere");
    Gelatin split();


};


class Humanoid{
    private:
    double _height;
    int _weight;
    public:
    Humanoid(double height, int weight);
    virtual ~Humanoid() = default;
    double height();
    int weight();
    

};

class Human:public Humanoid{
    private:
    bool _isMale;
    public:
    Human(bool isMale, double height, int weight);
    bool isMale();
};

class Kaylon:public Humanoid{
    private:
    bool _isFiring;
    public:
    Kaylon(double height, int weight);
    bool isFiring();
    void startFiring();
    void stopFiring();
};

class 
#endif