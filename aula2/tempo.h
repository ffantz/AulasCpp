class Tempo {
    private:
        int dias;
        int horas;
        int minutos;
        int segundos;
    public:
        // Construtores
        Tempo(int dias, int horas, int minutos, int segundos);
        // destrutor
        ~Tempo();
        // basic getters
        int getDias() const;
        int getHoras() const;
        int getMinutos() const;
        int getSegundos() const;

        void setDias(int valor);
        void setHoras(int valor);
        void setMinutos(int valor);
        void setSegundos(int valor);
        // other methods
        void checarConsistencia();
        Tempo somarTempos(Tempo a, Tempo b);
        void print() const;
};