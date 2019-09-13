/**
 * Computer Programming 2 (COMP2711, COMP8801)
 * Assignment 1: Bigint
 */

#ifndef BIGINT_H_
#define BIGINT_H_

#define DIGITS 10

class Bigint
{
  public:

    /**
     * Creates a Bigint initialised to 0.
     */
    Bigint();
    
    /**
     * Inserts n into stream or extracts n from stream.
     */
    friend std::ostream& operator<< (std::ostream &out, const Bigint& n);
    friend std::istream& operator>> (std::istream &in, Bigint& n);

    /**
     * Returns the sum, difference, product, or quotient of n1 and n2.
     */
    friend Bigint operator+ (const Bigint& n1, const Bigint& n2);
    friend Bigint operator- (const Bigint& n1, const Bigint& n2);
    friend Bigint operator* (const Bigint& n1, const Bigint& n2);
    friend Bigint operator/ (const Bigint& n1, const Bigint& n2);

  private:
    int digits_[DIGITS];
};

#endif // BIGINT_H_
