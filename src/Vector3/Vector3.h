/*
Vector in dimension 3
*/

#ifndef VQS_VECTOR3
#define VQS_VECTOR3

namespace vqs{

    // ----------------------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------------------
    // the Vector3 class, and its member functions

    // Vector3 is a 3D vector, with template-defined type
    template<typename type_base>
    class Vector3{
        public:
            // --------------------
            // a Vector3 has 3 components

            type_base ui;
            type_base uj;
            type_base uk;

            // --------------------
            // constructors

            Vector3(void);
            Vector3(Vector3<type_base> const & vin);
            Vector3(type_base const ui, type_base const uj, type_base const uk);

            // --------------------
            // norm properties

            type_base norm_squared(void) const;
            bool is_normed(type_base tol=VQS_DEFAULT_TOL) const;
            type_base norm(void) const;

            // --------------------
            // modifiers

            void nullify(void);
            bool normalize(type_base tol=VQS_DEFAULT_TOL);
    };

    // --------------------
    // constructors

    // default constructor initializes to 0
    template<typename type_base>
    Vector3<type_base>::Vector3(void): ui{0}, uj{0}, uk{0} {};

    // copy constructor performs a deep copy
    template<typename type_base>
    Vector3<type_base>::Vector3(Vector3<type_base> const & vin): ui{vin.ui}, uj{vin.uj}, uk{vin.uk} {};

    // construct by giving custom values
    template<typename type_base>
    Vector3<type_base>::Vector3(type_base const ui, type_base const uj, type_base const uk): ui{ui}, uj{uj}, uk{uk} {};
        
    // --------------------
    // norm properties

    // calculate the squared norm
    template<typename type_base>
    type_base Vector3<type_base>::norm_squared(void) const{
        return ui*ui + uj*uj + uk*uk;
    }

    // calculate the norm
    template<typename type_base>
    type_base Vector3<type_base>::norm(void) const{
        return sqrt(ui*ui + uj*uj + uk*uk);
    }

    // testing if the vector is normed, by looking at the square of the norm with a tolerance
    template<typename type_base>
    bool Vector3<type_base>::is_normed(type_base tol) const{
        return abs(1 - this->norm_squared()) < tol;
    }

    // --------------------
    // mofifiers

    // nullify, i.e. make equal to 0
    template<typename type_base>
    void Vector3<type_base>::nullify(void){
        ui = static_cast<type_base>(0.0);
        uj = static_cast<type_base>(0.0);
        uk = static_cast<type_base>(0.0);
    }

    // normalize the vector so that it gets norm 1, and return true;
    // in case this is the 0 vector, return false
    template<typename type_base>
    bool Vector3<type_base>::normalize(type_base tol){
        type_base norm = this->norm();

        if (abs(norm) < tol){
            return false;
        }

        ui /= norm;
        uj /= norm;
        uk /= norm;

        return true;
    }

    // ----------------------------------------------------------------------------------------------------
    // ----------------------------------------------------------------------------------------------------
    // extern functions acting on Vector3 objects

    // dot product as a pure function
    template<typename type_base>
    type_base dot_product(Vector3<type_base> const & vec_1, Vector3<type_base> const & vec_2){
        
    }

    // dot to a pre-allocated output
    template<typename type_base>
    void dot_product(Vector3<type_base> const & vec_1, Vector3<type_base> const & vec_2, type_base & result){
        
    }

    // TODO: put the double versions
    // addition as a pure function

    // addition to a pre-allocated output

    // negation as a pure function

    // negation to a pre-allocated output

    // scaling as a pure function

    // scaling to a pre-allocated output

    // subtraction as a pure function

    // subtraction to a pre-allocated output

    // cross product as a pure function
    template<typename type_base>

    // cross product to a pre-allocated output
    template<typename type_base>

}

#endif


