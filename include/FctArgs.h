
/*
* Function argumets in a nutshell
* See COPYRIGHT file at the top of the source tree.
*
* This product includes software developed by the
* STARGUE Project (http://www.stargue.org/).
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the STARGUE License Statement and
* the GNU General Public License along with this program. If not,
* see <http://www.lsstcorp.org/LegalNotices/>.
*/

/**
 * @file FctArgs.h
 *
 * @brief All the arguments used by a given function. 
 *
 * @author Adama Zouma
 * 
 * @Contact: stargue49@gmail.com
 *
 */

#ifndef FCT_ARGS_H
#define FCT_ARGS_H
namespace za {

/**
 * Implementation of a all arguemts used by a given function
 * All arguemts passed to a function are grouped in a single entity
 * This implemenation only focus on 2 to 3 arguments, following the same logic 
 * user can add more arguments
 */
template <typename ...> class FctArgs;
/* 2 Arguments */
template <typename A, typename B>
class FctArgs<A, B>
{
protected:
    A arg1_;
    B arg2_;
public:

// Default Constructors
FctArgs()
                        : arg1_(),                      
                        arg2_(){}

// Custom Constructor
FctArgs(A _arg1_, B _arg2_)
                        : arg1_(_arg1_), 
                        arg2_(_arg2_),{}



bool operator == (const FctArgs<A, B>& obj) const 
{
 return (isASame(this->arg1_, obj.arg1_) &&
                isBSame(this->arg2_, obj.arg2_));  
}



bool operator != (const FctArgs<A, B>& obj) const 
{
 return !(isASame(this->arg1_, obj.arg1_) &&
                isBSame(this->arg2_, obj.arg2_)); 
}


bool isASame (A compared1, A compared2) const
                            {
                                return (compared1 == compared2);
                            }


bool isBSame(B compared1, B compared2) const
                            {
                                return (compared1 == compared2);
                            }

// Setter and Getter arg1

auto arg1() const& -> const A& { return arg1_; }

auto arg1() &      -> A&       { return arg1_; }

auto arg1() &&     -> A&&      { return std::move(arg1_); }

// Setter and Getter arg2
auto arg2() const& -> const B& 
                            { 
                                return arg2_; 
                            }

auto arg2() & -> B&       
                            { 
                                return arg2_; 
                            }

auto arg2() && -> B&&      
                            { 
                                return std::move(arg2_); 
                            }
   
};
/* 3 Arguments */
template <typename A, typename B, typename C>
class FctArgs<A, B, C>
{
protected:
    A arg1_;
    B arg2_;
    C arg3_;
public:

// Default Constructors
FctArgs()
                        : arg1_(),                      
                        arg2_(),
                        arg3_(){}

// Custom Constructor
FctArgs(A _arg1_, B _arg2_, 
                        C _arg3_)
                        : arg1_(_arg1_), 
                        arg2_(_arg2_),
                        arg3_(_arg3_){}



bool operator == (const FctArgs<A, B, C>& obj) const 
{
 return (isASame(this->arg1_, obj.arg1_) &&
                isBSame(this->arg2_, obj.arg2_)&&
        isBSame(this->arg3_, obj.arg3_));  
}



bool operator != (const FctArgs<A, B, C>& obj) const 
{
 return !(isASame(this->arg1_, obj.arg1_) &&
                isBSame(this->arg2_, obj.arg2_)&&
        isBSame(this->arg3_, obj.arg3_)); 
}


bool isASame (A compared1, A compared2) const
                            {
                                return (compared1 == compared2);
                            }


bool isBSame(B compared1, B compared2) const
                            {
                                return (compared1 == compared2);
                            }

bool isBSame(C compared1, C compared2) const
                            {
                                return (compared1 == compared2);
                            }

// Setter and Getter arg1

auto arg1() const& -> const A& { return arg1_; }

auto arg1() &      -> A&       { return arg1_; }

auto arg1() &&     -> A&&      { return std::move(arg1_); }


// Setter and Getter arg2
auto arg2() const& -> const B& 
                            { 
                                return arg2_; 
                            }

auto arg2() & -> B&       
                            { 
                                return arg2_; 
                            }

auto arg2() && -> B&&      
                            { 
                                return std::move(arg2_); 
                            }
// Setter and Getter arg3
auto arg3() const& -> const C& 
                            { 
                                return arg3_; 
                            }
auto arg3() & -> C&       
                            { 
                                return arg3_; 
                            }

auto arg3() && -> C&&      
                            { 
                                return std::move(arg3_); 
                            }
    
   
};
// Add more arguments
}// End of namespace za
#endif  // FCT_ARGS_H
