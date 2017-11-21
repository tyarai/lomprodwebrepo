<?php
/**
 * @file
 * class LomFamilyNodeWrapper
 */

module_load_include('php', 'wrappers_custom','includes/node/LomMapNodeWrapper');
module_load_include('php', 'wrappers_custom','includes/node/LomIllustrationNodeWrapper');
class LomFamilyNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'lom_family';

  /**
   * Create a new lom_family node.
   *
   * @param array $values
   * @param string $language
   * @return LomFamilyNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new LomFamilyNodeWrapper($entity_wrapper->value());
  }

  /**
   * Sets body
   *
   * @param $value
   *
   * @return $this
   */
  public function setBody($value, $format = NULL) {
    $this->setText('body', $value, $format);
    return $this;
  }

  /**
   * Retrieves body
   *
   * @return mixed
   */
  public function getBody($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('body', $format, $markup_format);
  }

  /**
   * Sets field_illustration_ref
   *
   * @param $value
   *
   * @return $this
   */
  public function setIllustrationRef($value) {
    if (is_array($value)) {
      foreach ($value as $i => $v) {
        if ($v instanceof WdNodeWrapper) {
          $value[$i] = $v->value();
        }
      }
    }
    else {
      if ($value instanceof WdNodeWrapper) {
        $value = $value->value();
      }
    }

    $this->set('field_illustration_ref', $value);
    return $this;
  }

  /**
   * Retrieves field_illustration_ref
   *
   * @return LomIllustrationNodeWrapper[]
   */
  public function getIllustrationRef() {
    $values = $this->get('field_illustration_ref');
    foreach ($values as $i => $value) {
      $values[$i] = new LomIllustrationNodeWrapper($value);
    }
    return $values;
  }

  /**
   * Adds a value to field_illustration_ref
   *
   * @param $value
   *
   * @return $this
   */
  public function addToIllustrationRef($value) {
    if ($value instanceof WdNodeWrapper) {
      $value = $value->value();
    }
    $existing_values = $this->get('field_illustration_ref');
    if (!empty($existing_values)) {
      foreach ($existing_values as $i => $existing_value) {
        if (!empty($existing_value) && entity_id('node', $existing_value) == entity_id('node', $value)) {
          return $this;  // already here
        }
      }
    }
    $existing_values[] = $value;
    $this->set('field_illustration_ref', $existing_values);
    return $this;
  }

  /**
   * Removes a value from field_illustration_ref
   *
   * @param $value
   *   Value to remove.
   *
   * @return $this
   */
  function removeFromIllustrationRef($value) {
    if ($value instanceof WdNodeWrapper) {
      $value = $value->value();
    }
    $existing_values = $this->get('field_illustration_ref');
    if (!empty($existing_values)) {
      foreach ($existing_values as $i => $existing_value) {
        if (!empty($existing_value) && entity_id('node', $existing_value) == entity_id('node', $value)) {
          unset($existing_values[$i]);
        }
      }
    }
    $this->set('field_illustration_ref', array_values($existing_values));
    return $this;
  }


  /**
   * Sets field_species_list
   *
   * @param $value
   *
   * @return $this
   */
  public function setSpeciesList($value) {
    if (is_array($value)) {
      foreach ($value as $i => $v) {
        if ($v instanceof WdNodeWrapper) {
          $value[$i] = $v->value();
        }
      }
    }
    else {
      if ($value instanceof WdNodeWrapper) {
        $value = $value->value();
      }
    }

    $this->set('field_species_list', $value);
    return $this;
  }

  /**
   * Retrieves field_species_list
   *
   * @return LomIllustrationNodeWrapper[]
   */
  public function getSpeciesList() {
    $values = $this->get('field_species_list');
    foreach ($values as $i => $value) {
      $values[$i] = new LomIllustrationNodeWrapper($value);
    }
    return $values;
  }

  /**
   * Adds a value to field_species_list
   *
   * @param $value
   *
   * @return $this
   */
  public function addToSpeciesList($value) {
    if ($value instanceof WdNodeWrapper) {
      $value = $value->value();
    }
    $existing_values = $this->get('field_species_list');
    if (!empty($existing_values)) {
      foreach ($existing_values as $i => $existing_value) {
        if (!empty($existing_value) && entity_id('node', $existing_value) == entity_id('node', $value)) {
          return $this;  // already here
        }
      }
    }
    $existing_values[] = $value;
    $this->set('field_species_list', $existing_values);
    return $this;
  }

  /**
   * Removes a value from field_species_list
   *
   * @param $value
   *   Value to remove.
   *
   * @return $this
   */
  function removeFromSpeciesList($value) {
    if ($value instanceof WdNodeWrapper) {
      $value = $value->value();
    }
    $existing_values = $this->get('field_species_list');
    if (!empty($existing_values)) {
      foreach ($existing_values as $i => $existing_value) {
        if (!empty($existing_value) && entity_id('node', $existing_value) == entity_id('node', $value)) {
          unset($existing_values[$i]);
        }
      }
    }
    $this->set('field_species_list', array_values($existing_values));
    return $this;
  }


  /**
   * Sets field_map_list
   *
   * @param $value
   *
   * @return $this
   */
  public function setMapList($value) {
    if (is_array($value)) {
      foreach ($value as $i => $v) {
        if ($v instanceof WdNodeWrapper) {
          $value[$i] = $v->value();
        }
      }
    }
    else {
      if ($value instanceof WdNodeWrapper) {
        $value = $value->value();
      }
    }

    $this->set('field_map_list', $value);
    return $this;
  }

  /**
   * Retrieves field_map_list
   *
   * @return LomMapNodeWrapper[]
   */
  public function getMapList() {
    $values = $this->get('field_map_list');
    foreach ($values as $i => $value) {
      $values[$i] = new LomMapNodeWrapper($value);
    }
    return $values;
  }

  /**
   * Adds a value to field_map_list
   *
   * @param $value
   *
   * @return $this
   */
  public function addToMapList($value) {
    if ($value instanceof WdNodeWrapper) {
      $value = $value->value();
    }
    $existing_values = $this->get('field_map_list');
    if (!empty($existing_values)) {
      foreach ($existing_values as $i => $existing_value) {
        if (!empty($existing_value) && entity_id('node', $existing_value) == entity_id('node', $value)) {
          return $this;  // already here
        }
      }
    }
    $existing_values[] = $value;
    $this->set('field_map_list', $existing_values);
    return $this;
  }

  /**
   * Removes a value from field_map_list
   *
   * @param $value
   *   Value to remove.
   *
   * @return $this
   */
  function removeFromMapList($value) {
    if ($value instanceof WdNodeWrapper) {
      $value = $value->value();
    }
    $existing_values = $this->get('field_map_list');
    if (!empty($existing_values)) {
      foreach ($existing_values as $i => $existing_value) {
        if (!empty($existing_value) && entity_id('node', $existing_value) == entity_id('node', $value)) {
          unset($existing_values[$i]);
        }
      }
    }
    $this->set('field_map_list', array_values($existing_values));
    return $this;
  }


  /**
   * Sets field_isextinct
   *
   * @param $value
   *
   * @return $this
   */
  public function setIsextinct($value) {
    $this->set('field_isextinct', $value);
    return $this;
  }

  /**
   * Retrieves field_isextinct
   *
   * @return mixed
   */
  public function getIsextinct() {
    return $this->get('field_isextinct');
  }

  /**
   * Sets field_species_photograph
   *
   * @param $value
   *
   * @return $this
   */
  public function setSpeciesPhotograph($value) {
    if (is_array($value)) {
      foreach ($value as $i => $v) {
        if ($v instanceof WdNodeWrapper) {
          $value[$i] = $v->value();
        }
      }
    }
    else {
      if ($value instanceof WdNodeWrapper) {
        $value = $value->value();
      }
    }

    $this->set('field_species_photograph', $value);
    return $this;
  }

  /**
   * Retrieves field_species_photograph
   *
   * @return LomPhotographNodeWrapper[]
   */
  public function getSpeciesPhotograph() {
    $values = $this->get('field_species_photograph');
    foreach ($values as $i => $value) {
      $values[$i] = new LomPhotographNodeWrapper($value);
    }
    return $values;
  }

  /**
   * Adds a value to field_species_photograph
   *
   * @param $value
   *
   * @return $this
   */
  public function addToSpeciesPhotograph($value) {
    if ($value instanceof WdNodeWrapper) {
      $value = $value->value();
    }
    $existing_values = $this->get('field_species_photograph');
    if (!empty($existing_values)) {
      foreach ($existing_values as $i => $existing_value) {
        if (!empty($existing_value) && entity_id('node', $existing_value) == entity_id('node', $value)) {
          return $this;  // already here
        }
      }
    }
    $existing_values[] = $value;
    $this->set('field_species_photograph', $existing_values);
    return $this;
  }

  /**
   * Removes a value from field_species_photograph
   *
   * @param $value
   *   Value to remove.
   *
   * @return $this
   */
  function removeFromSpeciesPhotograph($value) {
    if ($value instanceof WdNodeWrapper) {
      $value = $value->value();
    }
    $existing_values = $this->get('field_species_photograph');
    if (!empty($existing_values)) {
      foreach ($existing_values as $i => $existing_value) {
        if (!empty($existing_value) && entity_id('node', $existing_value) == entity_id('node', $value)) {
          unset($existing_values[$i]);
        }
      }
    }
    $this->set('field_species_photograph', array_values($existing_values));
    return $this;
  }


  /**
   * Sets field_family_order
   *
   * @param $value
   *
   * @return $this
   */
  public function setFamilyOrder($value) {
    $this->set('field_family_order', $value);
    return $this;
  }

  /**
   * Retrieves field_family_order
   *
   * @return mixed
   */
  public function getFamilyOrder() {
    return $this->get('field_family_order');
  }
  
    public static function getAllFamiliesKeyedByNID($changedFrom=NULL){

        $families = array();
        try{
            
            $query  = " SELECT n.nid,n.title FROM {node} n ";
           
            $query .= " WHERE n.type = 'lom_family' "; 
            $query .= " AND n.status = 1 "; // Only published=YES will be returned
            
            if($changedFrom != NULL){
               //$query .= " AND n.changed >= ". strtotime($changedFrom); 
                $query .= " AND n.changed >= ". $changedFrom; 
            }
            
            $query .= " ORDER BY n.title ASC ";
            
            $result = db_query($query);
            
            while($record = $result->fetchAssoc()){
                $families[$record['nid']] = $record['title'];
            }
            
        }catch(Exception $e){
            drupal_set_message(t('[LomFamily::getAllFamiliesKeyedByNID()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }

        return $families;
    }
    
    /*
     * Retrieve all new or recently changed species
     */
    
    public static function allFamilies($changedFrom=NULL){
        $familyList = array();
        $changedFamilies = LomFamilyNodeWrapper::getAllFamiliesKeyedByNID($changedFrom);
        try{

            if(count($changedFamilies) != 0){
                foreach ($changedFamilies as $nid => $title){
                    if($nid != NULL){

                        $family = new LomFamilyNodeWrapper($nid);
                        
                        $maps = $family->getMapList();
                        $__map = array();
                        foreach($maps as $map){
                            if($map){
                                $__map[] = intval($map->getId());
                            }
                        }
                        
                        $illustrations = $family->getIllustrationRef();
                            
                        $_illustrations = array();
                        foreach($illustrations as $illustration){
                            if($illustration){
                                $_illustrations[] = intval($illustration->getId());
                            }
                        }
                            

                        if($family){

                            $familyList[] = array(
                                'nid'                   => intval($family->getId()),
                                'title'                 => strip_tags($family->getTitle()),
                                'illustration_ref'      => implode(",", $_illustrations),
                                //'map_list_id'           => implode(",", $__map),
                                //'image'                 => $family->getImage(),
                                'body'                  => strip_tags($family->getBody()),
                                'extinct'               => $family->getIsextinct() == 'yes' ? 1:0,
                            );

                        }
                    }
                }
            }
        }catch(Exception $e){
            drupal_set_message(t('[LomFamily::allFamily()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }

        
        //return drupal_json_encode($familyList);
        return $familyList;
    }

}
