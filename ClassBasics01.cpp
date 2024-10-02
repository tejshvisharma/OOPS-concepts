
class hero
{
   private:
    char level;
    int health;

   public:
    int age;
    hero(){
        cout<<"constructor is called"<<endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    setHealth(int h)
    {
        health = h;
    }

    setLevel(char l)
    {
        level = l;
    }


    

};


