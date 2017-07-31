<?php
/**
 * @file
 * class LomSpeciesNodeWrapper
 */

module_load_include('php', 'wrappers_custom','includes/node/LomFamilyNodeWrapper');
module_load_include('php', 'wrappers_custom','includes/node/LomMapNodeWrapper');
module_load_include('php', 'wrappers_custom','includes/node/LomPhotographNodeWrapper');
module_load_include('php', 'wrappers_custom','includes/node/BestPlacesNodeWrapper');
class LomSpeciesNodeWrapper extends WdNodeWrapper {

  protected $entity_type = 'node';
  private static $bundle = 'lom_species';

  /**
   * Create a new lom_species node.
   *
   * @param array $values
   * @param string $language
   * @return LomSpeciesNodeWrapper
   */
  public static function create($values = array(), $language = LANGUAGE_NONE) {
    $values += array('entity_type' => 'node', 'bundle' => self::$bundle, 'type' => self::$bundle);
    $entity_wrapper = parent::create($values, $language);
    return new LomSpeciesNodeWrapper($entity_wrapper->value());
  }

  /**
   * Sets field_lom_en
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomEn($value, $format = NULL) {
    $this->setText('field_lom_en', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_lom_en
   *
   * @return mixed
   */
  public function getLomEn($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_lom_en', $format, $markup_format);
  }

  /**
   * Sets field_lom_other_en
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomOtherEn($value, $format = NULL) {
    $this->setText('field_lom_other_en', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_lom_other_en
   *
   * @return mixed
   */
  public function getLomOtherEn($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_lom_other_en', $format, $markup_format);
  }

  /**
   * Sets field_lom_fr
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomFr($value, $format = NULL) {
    $this->setText('field_lom_fr', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_lom_fr
   *
   * @return mixed
   */
  public function getLomFr($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_lom_fr', $format, $markup_format);
  }

  /**
   * Sets field_lom_german
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomGerman($value, $format = NULL) {
    $this->setText('field_lom_german', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_lom_german
   *
   * @return mixed
   */
  public function getLomGerman($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_lom_german', $format, $markup_format);
  }

  /**
   * Sets field_lom_mg
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomMg($value, $format = NULL) {
    $this->setText('field_lom_mg', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_lom_mg
   *
   * @return mixed
   */
  public function getLomMg($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_lom_mg', $format, $markup_format);
  }

  /**
   * Sets field_lom_identification
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomIdentification($value, $format = NULL) {
    $this->setText('field_lom_identification', $value, $format);
    return $this;
  }

  /**
   * Retrieves field_lom_identification
   *
   * @return mixed
   */
  public function getLomIdentification($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_lom_identification', $format, $markup_format);
  }

  /**
   * Sets field_lom_natural_history
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomNaturalHistory($value, $format = NULL) {
    $this->setText('field_lom_natural_history', $value, $format);
    return $this;
  }

  /**
   * Retrieves field_lom_natural_history
   *
   * @return mixed
   */
  public function getLomNaturalHistory($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_lom_natural_history', $format, $markup_format);
  }

  /**
   * Sets field_lom_geographic_range
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomGeographicRange($value, $format = NULL) {
    $this->setText('field_lom_geographic_range', $value, $format);
    return $this;
  }

  /**
   * Retrieves field_lom_geographic_range
   *
   * @return mixed
   */
  public function getLomGeographicRange($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_lom_geographic_range', $format, $markup_format);
  }

  /**
   * Sets field_lom_conservation_status
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomConservationStatus($value, $format = NULL) {
    $this->setText('field_lom_conservation_status', $value, $format);
    return $this;
  }

  /**
   * Retrieves field_lom_conservation_status
   *
   * @return mixed
   */
  public function getLomConservationStatus($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_lom_conservation_status', $format, $markup_format);
  }

  /**
   * Sets field_lom_where_to_see_it
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomWhereToSeeIt($value, $format = NULL) {
    $this->setText('field_lom_where_to_see_it', $value, $format);
    return $this;
  }

  /**
   * Retrieves field_lom_where_to_see_it
   *
   * @return mixed
   */
  public function getLomWhereToSeeIt($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_lom_where_to_see_it', $format, $markup_format);
  }

  /**
   * Sets field_lom_family
   *
   * @param $value
   *
   * @return $this
   */
  public function setLomFamily($value) {
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

    $this->set('field_lom_family', $value);
    return $this;
  }

  /**
   * Retrieves field_lom_family
   *
   * @return LomFamilyNodeWrapper
   */
  public function getLomFamily() {
    $value = $this->get('field_lom_family');
    if (!empty($value)) {
      $value = new LomFamilyNodeWrapper($value);
    }
    return $value;
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
   * Sets field_species_profile_photograph
   *
   * @param $value
   *
   * @return $this
   */
  public function setSpeciesProfilePhotograph($value) {
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

    $this->set('field_species_profile_photograph', $value);
    return $this;
  }

  /**
   * Retrieves field_species_profile_photograph
   *
   * @return LomPhotographNodeWrapper
   */
  public function getSpeciesProfilePhotograph() {
    $value = $this->get('field_species_profile_photograph');
    if (!empty($value)) {
        module_load_include('php', 'wrappers_custom','includes/node/LomPhotographNodeWrapper');
        $value = new LomPhotographNodeWrapper($value);
    }
    return $value;
  }

  /**
   * Sets field_species_map
   *
   * @param $value
   *
   * @return $this
   */
  public function setSpeciesMap($value) {
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

    $this->set('field_species_map', $value);
    return $this;
  }

  /**
   * Retrieves field_species_map
   *
   * @return LomMapNodeWrapper
   */
  public function getSpeciesMap() {
    $value = $this->get('field_species_map');
    if (!empty($value)) {
      $value = new LomMapNodeWrapper($value);
    }
    return $value;
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
   * Sets field_isfavorite
   *
   * @param $value
   *
   * @return $this
   */
  public function setIsfavorite($value) {
    $this->set('field_isfavorite', $value);
    return $this;
  }

  /**
   * Retrieves field_isfavorite
   *
   * @return mixed
   */
  public function getIsfavorite() {
    return $this->get('field_isfavorite');
  }

  /**
   * Sets field_taxa
   *
   * @param $value
   *
   * @return $this
   */
  public function setTaxa($value) {
    $this->set('field_taxa', $value);
    return $this;
  }

  /**
   * Retrieves field_taxa
   *
   * @return mixed
   */
  public function getTaxa() {
    return $this->get('field_taxa');
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
   * Sets field_scientific_name
   *
   * @param $value
   *
   * @return $this
   */
  public function setScientificName($value, $format = NULL) {
    $this->setText('field_scientific_name', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_scientific_name
   *
   * @return mixed
   */
  public function getScientificName($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_scientific_name', $format, $markup_format);
  }

  /**
   * Sets field_scientist_name
   *
   * @param $value
   *
   * @return $this
   */
  public function setScientistName($value, $format = NULL) {
    $this->setText('field_scientist_name', $value, $format);
    return $this;
  }


  /**
   * Retrieves field_scientist_name
   *
   * @return mixed
   */
  public function getScientistName($format = WdEntityWrapper::FORMAT_DEFAULT, $markup_format = NULL) {
    return $this->getText('field_scientist_name', $format, $markup_format);
  }
  
    /*
     * Maka ny species rehetra
     */
    public static function getAllSpeciesKeyedByNID($extinct=TRUE,$changedFrom=NULL){

        $species = array();
        try{
            
            $query  = " SELECT n.nid,n.title FROM {node} n ";
            
            if($extinct !== NULL){
                $query .= " JOIN field_data_field_isextinct isextinct ";
                $query .= " ON isextinct.entity_type = 'node' ";
                $query .= " AND isextinct.bundle = 'lom_species' ";
                $query .= " AND isextinct.entity_id = n.nid ";
                $query .= " AND isextinct.deleted = 0 ";
            }
            
            $query .= " WHERE n.type = 'lom_species' "; 
            
            if($extinct !== NULL){
                $query . " AND isextinct.field_isextinct_value = ";
                $query .= $extinct ? "'yes'":"'no'";
            }
            
            
            if($changedFrom != NULL){
               $query .= " AND n.changed >= ". strtotime($changedFrom); 
            }
            
            $query .= " ORDER BY n.title ASC ";
            
            $result = db_query($query);
            
            while($record = $result->fetchAssoc()){
                $species[$record['nid']] = $record['title'];
            }
            
        }catch(Exception $e){
            drupal_set_message(t('[LomSpecies::getAllSpeciesKeyedByNID()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }

        return $species;
    }
    
    /*
     * Retrieve all new or recently changed species
     */
    
    public static function allSpecies($changedFrom=NULL){
        $speciesList = array();
        $changedSpecies = LomSpeciesNodeWrapper::getAllSpeciesKeyedByNID($extinct=NULL,$changedFrom);
        try{

            if(count($changedSpecies) != 0){
                foreach ($changedSpecies as $nid => $title){
                    if($nid != NULL){

                        $species = new LomSpeciesNodeWrapper($nid);

                        if($species){

                            $photos = array();
                            $species_photos = $species->getSpeciesPhotograph();
                            
                            $photos = array();
                            foreach($species_photos as $photo){
                                if($photo){
                                    $photos[] = intval($photo->getId());
                                }
                            }
                            
                            $map = $species->getSpeciesMap();
                            
                            $speciesList[] = array(
                                'nid'                   => intval($species->getId()),
                                'title'                 => $species->getTitle(),
                                'scientific_name'       => $species->getScientificName(),
                                'scientist_name'        => $species->getScientistName(),
                                'profile_photograph_id' => $species->getSpeciesProfilePhotograph() ? $species->getSpeciesProfilePhotograph()->getId() : NULL,
                                'lom_family_id'         => $species->getLomFamily() ? $species->getLomFamily()->getId() : NULL,
                                'taxa_tid'              => $species->getTaxa()[0]->tid,
                                'english'               => $species->getLomEn(),
                                'other_english'         => $species->getLomOtherEn(),
                                'french'                => $species->getLomFr(),
                                'malagasy'              => $species->getLomMg(),
                                'german'                => $species->getLomGerman(),
                                'identification'        => strip_tags($species->getLomIdentification()),
                                'geographic_range'      => strip_tags($species->getLomGeographicRange()),
                                'natural_history'       => strip_tags($species->getLomNaturalHistory()),
                                'conservation_status'   => strip_tags($species->getLomConservationStatus()),
                                'where_to_see_it'       => strip_tags($species->getLomWhereToSeeIt()),
                                'map'                   => $species->getSpeciesMap()? $species->getSpeciesMap()->getId() : NULL,
                                'species_photographs'   => $photos,
                                'extinct'               => $species->getIsextinct() == 'yes' ? 1:0,

                            );

                        }
                    }
                }
            }
        }catch(Exception $e){
            drupal_set_message(t('[LomSpecies::allSpecies()] Error: @e',array('@e'=>$e->getMessage())),'error');
        }

        
        return drupal_json_encode($speciesList);

    }
    
}
