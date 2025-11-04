#include "duck.h"

/* TODO */
void Duck::performFly(){
    Duck:: flyBehavior->fly();
}
/* TODO */
void Duck::performQuack(){
    Duck:: quackBehavior->quack();
}
/* TODO */
void Duck::setFlyBehavior(FlyBehavior* fb){
    flyBehavior = fb;
}
/* TODO */
void Duck::setQuackBehavior(QuackBehavior* qb){
    quackBehavior = qb;
}


/* TODO */
MallardDuck::MallardDuck() {
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}
/* TODO */
RedheadDuck::RedheadDuck() {
     flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}
/* TODO */
RubberDuck::RubberDuck() {
     flyBehavior = new FlyNoWay();
    quackBehavior = new Squeak();
}
/* TODO */
DecoyDuck::DecoyDuck() {
     flyBehavior = new FlyNoWay();
    quackBehavior = new MuteQuack();
}
/* TODO */
ModelDuck::ModelDuck() {
    flyBehavior = new FlyNoWay();
    quackBehavior = new MuteQuack();
}