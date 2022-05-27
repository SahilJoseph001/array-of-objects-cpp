// *** Coded By SahilJoseph *** //
# include <iostream>

class Class {
    private:
        int a;
    public:
        void get(void){
            std::cout<<"Enter the value of a : ";
            std::cin>>a;
        }
        void print(void){
            std::cout<<"The value of a is "<<a<<" "<<std::endl;
        }
};

int main(int argc, char const *argv[]) {

    // Class Object;
    // Object.get();
    // Object.print();

    Class objects[10];
    for (int i = 0; i < 10; i++)
    {
        objects[i].get();
        objects[i].print();
    }
    

    return 0;
}
