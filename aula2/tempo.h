class Tempo {
    private:
        int dia;
        int hora;
        int minuto;
        int segundo;
    public:
        // Construtores
        Tempo();
        Tempo(int dia, int hora = 0, int minuto = 0, int segundo = 0);
        // destrutor
        ~Tempo();
        // basic getters
        int getDia() const;
        int getHora() const;
        int getMinuto() const;
        int getSegundo() const;

        void setDia(int valor);
        void setHora(int valor);
        void setMinuto(int valor);
        void setSegundo(int valor);
        // other methods
        void checarConsistencia();
        Tempo somarTempos(Tempo a, Tempo b);
        Tempo incrementaSegundo(Tempo a);
        void print() const;
};